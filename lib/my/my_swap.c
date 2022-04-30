/*
** EPITECH PROJECT, 2021
** my_swap.c
** File description:
** swap content of two integers
*/

void my_swap(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}
