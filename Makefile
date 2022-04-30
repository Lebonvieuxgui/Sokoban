##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile to compile the with the lib
##

SRC =	src/main/main.c			\
		src/main/sokoban.c		\
		src/main/my_put_h.c		\
		src/ncurses/ncurses_main.c	\
		src/ncurses/ncurses_events.c	\
		src/player/place_player.c		\
		src/player/player_movement.c	\
		src/open_file.c		\
		src/errors.c		\
		src/tab_handler.c	\
		src/handle_ox.c		\

T_SRC	=	tests/test.c

OBJ	=	$(SRC:.c=.o)

OBJ_TESTS	=	$(TEST:.c = .o)

CFLAGS 		+= 	-W -Wall -Wextra -Wshadow -Wpedantic

CPPFLAGS	+=	-I./include

T_FLAGS		+=	--coverage -lcriterion

LDFLAGS	+=	-L./lib/my

LDLIBS	+=	-lmy -lncurses

NAME	=	my_sokoban

T_NAME	=	unit_tests

LIBMY	=	./lib/my/libmy.a

all:	$(NAME)

$(NAME):	$(OBJ) $(LIBMY)
	gcc -o $(NAME) $(OBJ) $(LDFLAGS) $(LDLIBS)

$(LIBMY):
	make -C lib/my

tests_run:
	gcc -o $(T_NAME) $(T_SRC) $(T_FLAGS) $(SRC) $(T_FLAGS) $(CPPFLAGS)
	./unit_tests
	rm -f *.gcno
	rm -f *.gcda

clean:
	make clean -C ./lib/my
	rm -f $(OBJ)
	rm -f *~
	rm -f *#

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re:	fclean all

.PHONY:	fclean all re clean tests
