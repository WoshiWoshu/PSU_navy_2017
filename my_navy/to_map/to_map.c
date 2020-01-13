#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/my_sokoban_v2.h"
#include "../../include/my_printf.h"
#include "../../include/my.h"
#include "../include/my_navy.h"

int to_map(int ac, char **av)
{	
	int x = 17;
	int y = 10;
	int counter = 0;
	char map[y][x];

	for (int j = 0 ; j < x ; j++) {		
		if (j == 0) {
			map[0][j] = ' ';
		}
		if (j == 0) {
			map[0][j] = '|';
		}
		if (j >= 1) {
			if (map[0][j - 1] < 'A' || map[0][j - 1] > 'Z') {
				map[0][j] = 'A' + counter;
				counter++;
			} else {
				map[0][j] = ' ';
			}
		}
		//printf("%c", map[0][j]);
	}
	for (int i = 0 ; i < y ; i++) {
		if (i == 1) {
			
		}
	}
}

int main(int ac, char **av)
{
	to_map(ac, av);
}
