##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile projet myprintf
##

SRC	=	my_show_word_array.c 	\
		my_stw.c 	\
		my_array_len.c 	\
		cm_freetab.c \
		cm_puttab.c \
		cm_strdup.c \
		cm_strtok.c

OBJ 	= 	$(SRC:.c=.o)

NAME 	=	libai.a

.SILENT:

all:		$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	make clean

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all lib $(NAME) clean fclean re
