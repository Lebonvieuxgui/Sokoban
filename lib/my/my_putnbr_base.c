/*
** EPITECH PROJECT, 2021
** myputnbr
** File description:
** display a number
*/

#include "my.h"

void my_putchar (char c);

int my_strlen(char const *str);

int my_putnbr_base(int nb, char const *base)
{
    int len = my_strlen(base);
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= len) {
        my_putnbr_base(nb / len, base);
        my_putnbr_base(nb % len, base);
    } else
        my_putchar(base[nb]);
    return (0);
}