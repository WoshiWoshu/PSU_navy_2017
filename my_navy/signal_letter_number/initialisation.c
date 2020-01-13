/*
** EPITECH PROJECT, 2018
** navy
** File description:
** initialisation
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "../include/my_navy.h"
#include "../../include/my_printf.h"
#include "../../include/my.h"

void signal_get_info(int sig, siginfo_t *info, void *context)
{
	if (sig == SIGUSR2) {
		global.pid_user_2 = info->si_pid;
		my_putstr("\n\nenemy connected");
	}
	if (sig == SIGUSR1) {
		global.pid_user_1 = info->si_pid;
		my_putstr("successfully connected");
	}
}

void to_handler_sig()
{
	struct sigaction user;

	sigemptyset(&(user.sa_mask));
	user.sa_flags = SA_SIGINFO;	
	user.sa_sigaction = signal_get_info;
	sigaction(SIGUSR1, &user, NULL);
	sigaction(SIGUSR2, &user, NULL);
}

void sig_player_1(void)
{
	my_putstr("my_pid:  ");
	my_printf("%d\n", getpid());
	my_putstr("waiting for an  ennemy connection...\n");
	pause();
	kill(global.pid_user_2, SIGUSR1);
}

void sig_player_2(char **av)
{
	my_putstr("my_pid:  ");
	my_printf("%d\n", getpid());
	kill(my_getnbr(av[1]), SIGUSR2);
	pause();
}

int initialisation(int ac, char **av)
{
	to_handler_sig();
	if (ac != 1) {
		sig_player_2(av);
	}
	else {
		sig_player_1();
	}
	return (0);
}
