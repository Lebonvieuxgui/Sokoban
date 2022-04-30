/*
** EPITECH PROJECT, 2021
** mycomputesquareroot
** File description:
** returns the square root of the argument
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    int result = 1;
    if (nb <= 0)
        return 0;
    if (nb == 1)
        return 1;
    while (result < nb) {
        if ((result * result) == nb) {
            return (result);
        }
        result += 1;
    }
    return (0);
}
