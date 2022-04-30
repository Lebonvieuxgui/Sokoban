/*
** EPITECH PROJECT, 2021
** mystrisupper
** File description:
** return 1 if only upper char and 0 otherwise
*/

#include <stddef.h>

int my_str_isupper(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (!(str[i] <= 91 && str[i] >= 64))
            return (0);
        i += 1;
    }
    return (1);
}
