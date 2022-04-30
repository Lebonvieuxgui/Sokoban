/*
** EPITECH PROJECT, 2021
** mystrcat
** File description:
** concatenate two strings
*/

#include "my.h"

int my_strlen (char const *str)
{
    int o = 0;
    while (str[o] != '\0')
        o = o +1;
    return (o);
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (src[i] != '\0') {
        dest[dest_len] = src[i];
        i = i + 1;
        dest_len = dest_len + 1;
    }
    return dest;
}
