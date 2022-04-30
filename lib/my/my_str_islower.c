/*
** EPITECH PROJECT, 2021
** mystrislower
** File description:
** return 1 if only lowercase and 0 otherwise
*/

#include <stddef.h>

int my_str_islower(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (!(str[i] <= 123 && str[i] >= 96))
            return (0);
        i += 1;
    }
    return (1);
}
