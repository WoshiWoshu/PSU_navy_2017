/*
** EPITECH PROJECT, 2018
** navy
** File description:
** number sig catch back
*/

#include "../include/my_navy.h"

void number_to_sig_send_back(char *array)
{
	int i;

	if (array[1] == '1') {
		i = 1;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '2') {
		i = 2;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '3') {
		i = 3;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
}

void number_to_sig_send_part_2_back(char *array)
{
	int i;

	if (array[1] == '4') {
		i = 4;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '5') {
		i = 5;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '6') {
		i = 6;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
}

void number_to_sig_send_part_3_back(char *array)
{
	int i;

	if (array[1] == '7') {
		i = 7;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
	if (array[1] == '8') {
		i = 8;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR2);
			i--;
		}
	}
}
