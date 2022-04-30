/*
** EPITECH PROJECT, 2021
** MY_ISNEG
** File description:
** display N if negative or P if positive
*/

#include "my.h"

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar ('N');
    } else {
        my_putchar ('P');
    }
    my_putchar ('\n');
}
