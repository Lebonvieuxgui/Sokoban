/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** reverse a string
*/

void my_swap_char(char *a, char *b)
{
    int c = *a;

    *a = *b;
    *b = c;
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int g = 0;
    int i = my_strlen(str) - 1;

    while (g < i) {
        my_swap_char(&str[g], &str[i]);
        g = g + 1;
        i = i - 1;
    }
    return (str);
}
