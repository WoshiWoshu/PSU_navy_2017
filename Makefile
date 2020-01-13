##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## compile the libmy
##

CC = gcc

RM = rm -f

SRC =	my_navy/signal_letter_number/initialisation.c \
	my_navy/signal_letter_number/communication_signal_handle.c \
	my_navy/signal_letter_number/sig_p1_to_p2_or_p2_to_p1.c \
	my_navy/signal_letter_number/letter_to_sig_send.c \
	my_navy/signal_letter_number/letter_to_sig_catch.c \
	my_navy/signal_letter_number/number_to_sig_send.c \
	my_navy/signal_letter_number/number_to_sig_catch.c \
	my_navy/signal_letter_number/letter_to_sig_send_back.c \
	my_navy/signal_letter_number/letter_to_sig_catch_back.c \
	my_navy/signal_letter_number/number_to_sig_send_back.c \
	my_navy/signal_letter_number/number_to_sig_catch_back.c \
	my_navy/signal_letter_number/sig_to_letter_or_number.c \
	my_navy/signal_letter_number/communication_p1_to_p2.c \
	my_navy/signal_letter_number/communication_p2_to_p1.c \
	my_navy/signal_miss_hit/communication_handler_hit_miss.c \
	my_navy/signal_miss_hit/communication_hit_miss.c \
	my_navy/my_navy.c \
	my_navy/main.c

OBJ = $(SRC:.c=.o)

NAME = navy

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(MAKE) -C ./libmy
	$(CC) $(OBJ) -o $(NAME) -L ./libmy -l my
clean:
	$(RM) $(OBJ)

fclean: clean
	make -C libmy fclean
	$(RM) $(NAME)

re: fclean all

.PHONY : all fclean clean re
