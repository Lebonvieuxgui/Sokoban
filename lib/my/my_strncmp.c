/*
** EPITECH PROJECT, 2021
** int my strncmp
** File description:
** strcmp but with with the first "n" bytes of s1 and s2
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (n == 0) {
        return 0;
    }
    while (s1[i] == s2[i] && i < n - 1 && s1[i] != '\0' && s2[i] != '\0') {
        i = i + 1;
    }
    return s1[i] -s2[i];
}
