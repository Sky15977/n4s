##
## EPITECH PROJECT, 2022
## B-CPE-110-REN-1-1-BSQ-yann.morvan
## File description:
## Makefile
##

SRC	=	src/main.c 			\
		src/finish_line.c	\
		src/process_direction.c \
		src/process_speed.c \
		src/get_lidinfo.c 	\
		src/my_n4s.c

OBJ	=	$(SRC:.c=.o)

NAME = ai

CFLAGS = -I ./include/ -Wall -Wextra

LIB = -L ./lib/my/ -lai

.SILENT:

all: $(NAME)

$(NAME): $(OBJ)
		make -C lib/my
		gcc $(SRC) -o $(NAME) $(CFLAGS) $(LIB) -g
		make clean

clean:
		rm -f $(OBJ)
		rm -f *~
		rm -f vgcore.*
		rm -f codi*
		make clean -C lib/my

fclean: clean
		rm -f $(NAME)
		make fclean -C lib/my

re:	fclean all

.SILENT: $(OBJ)

.PHONY: all clean fclean re
