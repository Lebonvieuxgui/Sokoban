/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** ncurses_main
*/

#include "sokoban.h"

void print_map(char *buffer, char **map)
{
    int lines = count_lines(buffer);
    int cols;

    for (int i = 0; i < lines; i += 1) {
        cols = my_strlen(map[i]);
        for (int j = 0; j < cols; j += 1) {
            mvprintw(LINES / 2 + i - 6, COLS / 2 + j - 6, "%c", map[i][j]);
        }
    }
}

int display_ncurses(char **map_in_tab, char *buffer, player_t *player,
    place_t *place_o)
{
    place_t *place_x = malloc(sizeof(place_t) * count_o(buffer));
    int switcher = 0;
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    noecho();
    while (check_win(place_o, place_x, buffer) != count_o(buffer)) {
        usleep(2000);
        print_map(buffer, map_in_tab);
        player_place(map_in_tab, buffer, player);
        events(map_in_tab, player);
        get_pos_x(place_x, map_in_tab, buffer);
        if (x_check(map_in_tab, place_x, buffer) == count_o(buffer)) {
            switcher = 1;
            break;
        }
        put_o(buffer, map_in_tab, place_o);
    }
    print_map(buffer, map_in_tab);
    refresh();
    endwin();
    return (switcher);
}
