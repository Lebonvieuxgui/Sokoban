/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** errors
*/

#include "sokoban.h"

void check_error(int ac)
{
    if (ac != 2)
        exit(ERROR);
}

int error_handling(char *buffer)
{
    int nb_o = count_o(buffer);
    int nb_x = count_x(buffer);

    for (int i = 0; buffer[i] != '\0'; i += 1) {
        if (buffer[i] != '\n' && buffer[i] != '#' && buffer[i] != 'P'
        && buffer[i] != 'X' && buffer[i] != 'O' && buffer[i] != ' ') {
            exit(ERROR);
        }
    }
    if (nb_o != nb_x)
        exit(ERROR);
    exit(SUCCESS);
}

int x_check(char **map_in_tab, place_t *place_x, char *buffer)
{
    int count = 0;

    for (int i = 0; i < count_x(buffer); i += 1) {
        count += is_blocked(map_in_tab, place_x[i]);
    }
    return (count);
}

int is_blocked(char **tab, place_t pos)
{
    return (((tab[pos.y - 1][pos.x] == '#' || tab[pos.y - 1][pos.x] == 'X')
        || (tab[pos.y + 1][pos.x] == '#' || tab[pos.y + 1][pos.x] == 'X'))
        && ((tab[pos.y][pos.x - 1] == '#' || tab[pos.y][pos.x - 1] == 'X')
        || (tab[pos.y][pos.x + 1] == '#' || tab[pos.y][pos.x + 1] == 'X')));
}
