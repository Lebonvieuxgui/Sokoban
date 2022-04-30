/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** ncurses_events
*/

#include "sokoban.h"

void events(char **char_tab, player_t *player)
{
    int c = 0;
    c = getch();
    switch (c) {
        case KEY_LEFT:
            player_left(char_tab, player);
            break;
        case KEY_RIGHT:
            player_right(char_tab, player);
            break;
        case KEY_DOWN:
            player_down(char_tab, player);
            break;
        case KEY_UP:
            player_up(char_tab, player);
            break;
    }
}

int check_win(place_t *place_o, place_t *place_x, char *buffer)
{
    int win = 0;

    for (int i = 0; i < count_o(buffer); i += 1) {
        if ((place_o[i].y == place_x[i].y) && (place_o[i].x == place_x[i].x))
            win += 1;
    }
    return (win);
}
