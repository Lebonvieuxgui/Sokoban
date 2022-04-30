/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** handle_o
*/

#include "sokoban.h"

int count_x(char *buffer)
{
    int count = 0;

    for (int i = 0; buffer[i] != '\0'; i += 1) {
        if (buffer[i] == 'X')
            count += 1;
    }
    return (count);
}

int count_o(char *buffer)
{
    int count = 0;

    for (int i = 0; buffer[i] != '\0'; ++i) {
        if (buffer[i] == 'O')
            ++count;
    }
    return (count);
}

void get_pos_o(place_t *place_o, char **map_in_tab, char *buffer)
{
    int i = 0;
    int lines = count_lines(buffer);
    int cols;

    for (int j = 0; j < lines - 1; j += 1) {
        cols = my_strlen(map_in_tab[j]);
        for (int k = 0; k < cols - 1; k += 1) {
            if (map_in_tab[j][k] == 'O') {
                place_o[i].x = k;
                place_o[i].y = j;
                i += 1;
            }
        }
    }
}

void get_pos_x(place_t *place_x, char **map_in_tab, char *buffer)
{
    int k = 0;
    int lines = count_lines(buffer);
    int cols = 0;

    for (int i = 0; i < lines; i += 1) {
        cols = my_strlen(map_in_tab[i]);
        for (int j = 0; j < cols - 1; j += 1) {
            if (map_in_tab[i][j] == 'X') {
                place_x[k].x = j;
                place_x[k].y = i;
                k += 1;
            }
        }
    }
}

void put_o(char *buffer, char **map_in_tab, place_t *place_o)
{
    for (int i = 0; i < count_o(buffer); ++i) {
        if (map_in_tab[place_o[i].y][place_o[i].x] == ' ') {
            map_in_tab[place_o[i].y][place_o[i].x] = 'O';
        }
    }
}
