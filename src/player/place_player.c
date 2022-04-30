/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** place_player
*/

#include "sokoban.h"

void player_place(char **char_tab, char *buffer, player_t *player)
{
    int lines = count_lines(buffer);
    int cols;

    for (int i = 0; i < lines; i += 1) {
        cols = my_strlen(char_tab[i]);
        for (int j = 0; j < cols; j += 1) {
            if (char_tab[i][j] == 'P') {
                player->y = i;
                player->x = j;
            }
        }
    }
}
