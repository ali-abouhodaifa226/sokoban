##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC	=	src/array.c\
		src/check_end_game.c\
		src/error.c\
		src/fill_tab.c\
		src/usages.c\
		src/move_management_1.c\
		src/move_management_2.c\
		src/move_management_3.c\
		src/my_popup_1.c\
		src/my_popup.c\
		main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CC	=	gcc

LDFLAGS	=	-lmy -L ./lib/my/ -lncurses

CFLAGS	=	-W -Wall -Wextra -Werror

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/my/ fclean
	rm -f $(NAME)

re:	fclean	all
