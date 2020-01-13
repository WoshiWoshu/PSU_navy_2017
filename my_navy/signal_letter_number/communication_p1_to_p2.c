/*
** EPITECH PROJECT, 2018
** navy
** File description:
** communication p1 p2
*/

#include <sys/types.h>
#include <signal.h>
#include <stdlib.h>
#include "../include/my_navy.h"
#include "../../include/my_printf.h"

void p1_to_p2_send(char *array)
{
	letter_to_sig_send(array);
	letter_to_sig_send_part_2(array);
	letter_to_sig_send_part_3(array);
	number_to_sig_send(array);
	number_to_sig_send_part_2(array);
	number_to_sig_send_part_3(array);
}

void p1_to_p2_catch(char *array)
{
	letter_to_sig_catch(array);
	letter_to_sig_catch_part_2(array);
	letter_to_sig_catch_part_3(array);
	number_to_sig_catch(array);
	number_to_sig_catch_part_2(array);
	number_to_sig_catch_part_3(array);
	sig_to_letter();
	sig_to_letter_part_2();
	sig_to_number();
	sig_to_number_part_2();
}

void sig_p1_to_p2(int ac, char **av)
{
	char *array = malloc(sizeof(char) * 2);

	array[0] = 'C';
	array[1] = '8';
	if (ac == 1) {
		p1_to_p2_send(array);
	}
	else {
		p1_to_p2_catch(array);
	        //my_printf("\n%s\n", global.array_letter_nb);
	}
	free(array);
}
