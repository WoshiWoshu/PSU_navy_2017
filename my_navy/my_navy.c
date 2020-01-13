#include "include/my_navy.h"
#include <sys/types.h>
#include <signal.h>

int my_navy(int ac, char **av)
{
	initialisation(ac, av);
	to_handler_sig_3();
	to_handler_sig_2();
	//sig_p1_to_p2(ac, av);
	//sig_p1_to_p2_hit_miss(ac, av, SIGUSR2);
	sig_p2_to_p1(ac, av);
	return (0);
}
