/*
** EPITECH PROJECT, 2021
** myputnbr
** File description:
** display a number
*/

#include "my.h"

int my_put_nbr(int nb)
{
    if (nb == 0)
        return 84;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_putchar(nb % 10 + 48);
    }
    return (1);
}
