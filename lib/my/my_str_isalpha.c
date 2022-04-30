/*
** EPITECH PROJECT, 2021
** mystrisalpha
** File description:
** returns 1 if str contains only alphabetical char and 0 if another type
*/

#include <stddef.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (str[i] <= 91 && str[i] >= 64 || str[i] <= 123 && str[i] >= 96)
            i = i + 1;
        else
            return (0);
    }
    return (1);
}
