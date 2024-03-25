##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##
SRC	=	my_putchar.c \
		my_putstr.c \
		my_strlen.c \
		my_strcmp.c \
		my_strcat.c \

NAME	=	libmy.a

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
