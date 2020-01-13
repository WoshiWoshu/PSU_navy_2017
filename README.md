# PSU_navy_2017
First year mini project in C which implements UNIX signals communications between two processes (terminals). SIGUSER1 and SIGUSER2 are the main singals. The program function as a Pong system, waiting for player 1 to send a signal and then player 2 send back a different signal. It is a low protocol communcations which can only send informations bytes by bytes (single character by single character).

USAGE :

1) Make

2) ./navy [first_player_pid]

DESCRIPTION :

- first_player_pid:  only for the 2nd player.  pid of the first player

EXEMPLE :

> ./navy pos1

my_pid: 4242
waiting for enemy connection...
enemy connected

> ./navy 4242 pos2

my_pid: 4250
successfully connected
