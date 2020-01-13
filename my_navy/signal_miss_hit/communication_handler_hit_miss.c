/*
** EPITECH PROJECT, 2018
** navy
** File description:
** handle sig
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "../include/my_navy.h"

void to_handler_sig_3()
{
	struct sigaction user;

	sigemptyset(&(user.sa_mask));
	user.sa_handler = get_signal_hit_miss;
	sigaction(SIGUSR1, &user, NULL);
	sigaction(SIGUSR2, &user, NULL);
}

void get_signal_hit_miss(int sig)
{
	if (sig == SIGUSR1) {
		global.sig_hit_miss = 0;
	}
	if (sig == SIGUSR2) {
		global.sig_hit_miss = 1;
	}
}
