/*
** EPITECH PROJECT, 2021
** mystrncat
** File description:
** concatenates n char of two strings
*/

int my_strlen (char const *str)
{
    int o = 0;
    while (str[o] != '\0') {
        o = o +1;
    }
    return (o);
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (i < nb) {
        dest[dest_len] = src[i];
        i = i + 1;
        dest_len = dest_len + 1;
    }
    return dest;
}
