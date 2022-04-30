/*
** EPITECH PROJECT, 2021
** mystrlen
** File description:
** count the number of char in a string
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}
