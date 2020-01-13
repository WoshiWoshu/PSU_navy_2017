/*
** EPITECH PROJECT, 2018
** navy
** File description:
** communication signal handle
*/

#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include "../include/my_navy.h"

void to_handler_sig_2()
{
	struct sigaction user;

	sigemptyset(&(user.sa_mask));
	user.sa_handler = get_signal;
	sigaction(SIGUSR1, &user, NULL);
	sigaction(SIGUSR2, &user, NULL);
}

void get_signal(int sig)
{
	if (sig == SIGUSR1) {
		global.sig_letter++;
	}
	if (sig == SIGUSR2) {
		global.sig_number++;
	}
}
