##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC	=	my_putchar.c			\
		my_isneg.c			\
		my_put_nbr.c			\
		my_swap.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_getnbr.c			\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_is_prime.c			\
		my_strcpy.c			\
		my_strncpy.c			\
		my_revstr.c			\
		my_strcmp.c			\
		my_strncmp.c			\
		my_strupcase.c			\
		my_strlowcase.c			\
		my_strcapitalize.c		\
		my_str_isnum.c			\
		my_str_islower.c		\
		my_str_isupper.c		\
		my_str_isprintable.c		\
		my_strcat.c			\
		my_strncat.c		\
		my_putnbr_base.c	\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include
	cp $(NAME) ../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) ../$(NAME)
	rm -f *~

re:	fclean all

.PHONY: re fclean clean
