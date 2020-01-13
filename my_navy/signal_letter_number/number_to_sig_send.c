/*
** EPITECH PROJECT, 2018
** navy
** File description:
** sig send number
*/

#include "../include/my_navy.h"

void number_to_sig_send(char *array)
{
	int i;

	if (array[1] == '1') {
		i = 1;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '2') {
		i = 2;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '3') {
		i = 3;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
}

void number_to_sig_send_part_2(char *array)
{
	int i;

	if (array[1] == '4') {
		i = 4;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '5') {
		i = 5;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '6') {
		i = 6;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
}

void number_to_sig_send_part_3(char *array)
{
	int i;

	if (array[1] == '7') {
		i = 7;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '8') {
		i = 8;
		while (i != 0) {
			sig_player_1_game(SIGUSR2);
			i--;
		}
	}
}
