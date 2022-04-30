/*
** EPITECH PROJECT, 2021
** My strncpy
** File description:
** strcpy with n characters
*/

int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int len = my_strlen(src);

    while (i != len && i < n) {
        dest[i] = src [i];
        i = i + 1;
    }
    if (n > len)
        dest[i] = '\0';
    return (dest);
}
