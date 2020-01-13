#include <sys/types.h>
#include <signal.h>

typedef struct info_user info_user;
struct info_user {
	int pid_user_1;
	int pid_user_2;
	int sig_letter;
	int sig_number;
	int sig_hit_miss;
	char array_letter_nb[2];
};

info_user global;

void signal_get_info(int pid, siginfo_t *info, void *context);
void sig_player_1(void);
void sig_player_2(char **av);
int initialisation(int ac, char **av);
int my_navy(int ac, char **av);
void to_handler_sig();
void get_signal(int sig);
void sig_p1_to_p2(int ac, char **av);
void sig_to_letter_part_2(void);
void sig_to_letter(void);
void letter_to_sig_catch_part_3(char *array);
void letter_to_sig_catch_part_2(char *array);
void letter_to_sig_catch(char *array);
void number_to_sig_catch_part_3(char *array);
void number_to_sig_catch_part_2(char *array);
void number_to_sig_catch(char *array);
void letter_to_sig_send_part_3(char *array);
void letter_to_sig_send_part_2(char *array);
void letter_to_sig_send(char *array);
void number_to_sig_send_part_3(char *array);
void number_to_sig_send_part_2(char *array);
void number_to_sig_send(char *array);
void sig_player_1_game(int sigtype);
void sig_player_2_game();
void to_handler_sig_2();
void to_handler_sig_3();
void get_signal_hit_miss(int sig);
void sig_to_number(void);
void sig_to_number_part_2(void);
void p1_to_p2_send(char *array);
void p1_to_p2_catch(char *array);
void sig_p2_to_p1(int ac, char **av);
void sig_player_1_game_back(void);
void sig_player_2_game_back(int sigtype);
void letter_to_sig_catch_back(char *array);
void letter_to_sig_catch_part_2_back(char *array);
void letter_to_sig_catch_part_3_back(char *array);
void letter_to_sig_send_back(char *array);
void letter_to_sig_send_part_2_back(char *array);
void letter_to_sig_send_part_3_back(char *array);
void number_to_sig_send_back(char *array);
void number_to_sig_send_part_2_back(char *array);
void number_to_sig_send_part_3_back(char *array);
void number_to_sig_catch_part_3_back(char *array);
void number_to_sig_catch_part_2_back(char *array);
void number_to_sig_catch_back(char *array);
void sig_p1_to_p2_hit_miss(int ac, char **av, int sigtype);
void sig_p2_to_p1_hit_miss(int ac, char **av, int sigtype);
