##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

SRC		=		101pong.c

OBJ		=		$(SRC:.c=.o)

NAME	=		101pong

all:	$(NAME)

$(NAME):		$(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
