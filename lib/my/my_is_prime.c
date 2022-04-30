/*
** EPITECH PROJECT, 2021
** myisprime
** File description:
** returns 1 if the number is prime and 0 if not
*/

#include "my.h"

int my_is_prime(int nb)
{
    int i = 3;

    if (nb == 0 || nb == 1 || nb == 2)
        return (0);
    while (i <= nb / 2) {
        if (nb % i == 0){
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
