/*
** EPITECH PROJECT, 2021
** mycomputepowerrec
** File description:
** recursive function that returns the first argument to the power p
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return 1;
    if (nb == 0 || p < 0)
        return 0;
    if (p != 0)
        result = my_compute_power_rec(nb, p - 1) * result;
    return (result);
}
