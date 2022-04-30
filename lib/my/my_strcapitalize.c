/*
** EPITECH PROJECT, 2021
** my strcapitalize
** File description:
** capitalize the first letter of each word
*/

#include "my.h"

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str [i] + 32;
        i += 1;
    }
    return str;
}

char *my_strcapitalize(char *str)
{
    int y = 0;

    if (str == NULL)
        return (NULL);
    my_strlowcase(str);
    if (str[y] >= 'a' && str[y] <= 'z')
        str[y] = str [y] - 32;
    while (str[y] != '\0') {
        if ((str[y - 1] == ' ' || str[y - 1] == '+' ||\
         str[y - 1] == '-') && (str[y] >= 97 && str[y] <= 122))
            str[y] += - 32;
        y += 1;
    }
    return (str);
}
