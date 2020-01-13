/*
** EPITECH PROJECT, 2018
** navy
** File description:
** letter sig send back
*/

#include "../include/my_navy.h"

void letter_to_sig_send_back(char *array)
{
	int i;

	if (array[0] == 'A') {
		i = 1;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
	if (array[0] == 'B') {
		i = 2;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
	if (array[0] == 'C') {
		i = 3;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
}

void letter_to_sig_send_part_2_back(char *array)
{
	int i;

	if (array[0] == 'D') {
		i = 4;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
	if (array[0] == 'E') {
		i = 5;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
	if (array[0] == 'F') {
		i = 6;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
}

void letter_to_sig_send_part_3_back(char *array)
{
	int i;

	if (array[0] == 'G') {
		i = 7;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
	if (array[0] == 'H') {
		i = 8;
		while (i != 0) {
			sig_player_2_game_back(SIGUSR1);
			i--;
		}
	}
}
