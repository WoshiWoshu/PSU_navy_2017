/*
** EPITECH PROJECT, 2018
** navy
** File description:
** hit or miss
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "../include/my_navy.h"

void sig_p1_to_p2_hit_miss(int ac, char **av, int sigtype)
{
	if (ac == 1) {
		sig_player_1_game(sigtype);
	}
	else {
		sig_player_2_game();
	}
}

void sig_p2_to_p1_hit_miss(int ac, char **av, int sigtype)
{
	if (ac == 1) {
		sig_player_1_game_back();
	}
	else {
		sig_player_2_game_back(sigtype);
	}
}
