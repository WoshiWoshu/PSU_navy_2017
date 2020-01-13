/*
** EPITECH PROJECT, 2018
** navy
** File description:
** sig handle
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "../include/my_navy.h"

void sig_player_2_game_back(int sigtype)
{
	usleep(500);
	kill(global.pid_user_1, sigtype);
	pause();
}

void sig_player_1_game_back(void)
{
	pause();
	usleep(500);
	kill(global.pid_user_2, SIGUSR1);
}

void sig_player_2_game()
{
	pause();
	usleep(500);
	kill(global.pid_user_1, SIGUSR1);
}

void sig_player_1_game(int sigtype)
{
	usleep(500);
	kill(global.pid_user_2, sigtype);
	pause();
}
