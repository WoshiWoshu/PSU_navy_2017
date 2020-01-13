/*
** EPITECH PROJECT, 2018
** navy
** File description:
** communication p2 p1
*/

#include <stdlib.h>
#include <sys/types.h>
#include <signal.h>
#include "../include/my_navy.h"
#include "../../include/my_printf.h"

void p2_to_p1_send(char *array)
{
	letter_to_sig_send_back(array);
	letter_to_sig_send_part_2_back(array);
	letter_to_sig_send_part_3_back(array);
	number_to_sig_send_back(array);
	number_to_sig_send_part_2_back(array);
	number_to_sig_send_part_3_back(array);
}

void p2_to_p1_catch(char *array)
{
	letter_to_sig_catch_back(array);
	letter_to_sig_catch_part_2_back(array);
	letter_to_sig_catch_part_3_back(array);
	number_to_sig_catch_back(array);
	number_to_sig_catch_part_2_back(array);
	number_to_sig_catch_part_3_back(array);
	sig_to_letter();
	sig_to_letter_part_2();
	sig_to_number();
	sig_to_number_part_2();
}

void sig_p2_to_p1(int ac, char **av)
{
	char *array = malloc(sizeof(char) * 2);

	array[0] = 'D';
	array[1] = '5';
	if (ac == 1) {
		p2_to_p1_catch(array);
		//my_printf("\n%s\n", global.array_letter_nb);
	}
	else {
	      p2_to_p1_send(array);
	}
	free(array);
}
