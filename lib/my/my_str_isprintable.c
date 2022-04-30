/*
** EPITECH PROJECT, 2021
** mystrisprintable
** File description:
** return 1 if string contains printable char and 0 otherwise
*/

#include <stddef.h>

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (!(str[i] <= 127 && str[i] >= 31))
            return (0);
        i += 1;
    }
    return (1);
}
