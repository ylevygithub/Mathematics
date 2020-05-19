##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

SRC		=		102architect.c \
				translation.c

OBJ		=		$(SRC:.c=.o)

NAME	=		102architect

all:	$(NAME)

$(NAME):		$(OBJ)
	gcc $(OBJ) -o $(NAME) -lm

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
