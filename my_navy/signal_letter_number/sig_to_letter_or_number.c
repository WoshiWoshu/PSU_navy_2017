/*
** EPITECH PROJECT, 2018
** navy
** File description:
** letter or number sig
*/

#include "../include/my_navy.h"

void sig_to_number(void)
{
	switch(global.sig_number) {
	case 1:
		global.array_letter_nb[1] = '1';
		break;
	case 2:
		global.array_letter_nb[1] = '2';
		break;
	case 3:
		global.array_letter_nb[1] = '3';
		break;
	case 4:
		global.array_letter_nb[1] = '4';
		break;
	case 5:
		global.array_letter_nb[1] = '5';
		break;
	}
}

void sig_to_number_part_2(void)
{
	switch(global.sig_number) {
	case 6:
		global.array_letter_nb[1] = '6';
		break;
	case 7:
		global.array_letter_nb[1] = '7';
		break;
	case 8:
		global.array_letter_nb[1] = '8';
		break;
	}
}

void sig_to_letter(void)
{
	switch(global.sig_letter) {
	case 1:
		global.array_letter_nb[0] = 'A';
		break;
	case 2:
		global.array_letter_nb[0] = 'B';
		break;
	case 3:
		global.array_letter_nb[0] = 'C';
		break;
	case 4:
		global.array_letter_nb[0] = 'D';
		break;
	case 5:
		global.array_letter_nb[0] = 'E';
		break;
	}
}

void sig_to_letter_part_2(void)
{
	switch(global.sig_letter) {
	case 6:
		global.array_letter_nb[0] = 'F';
		break;
	case 7:
		global.array_letter_nb[0] = 'G';
		break;
	case 8:
		global.array_letter_nb[0] = 'H';
		break;
	}
}
