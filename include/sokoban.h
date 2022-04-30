/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
    #define SOKOBAN_H_

    #include <curses.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include "my.h"
    #include "player.h"

    //errors
    void check_error(int ac);
    int error_handling(char *buffer);
    int x_check(char **map_in_tab, place_t *place_x, char *buffer);
    int is_blocked(char **tab, place_t pos);
    //main
    int my_sokoban(char *map);
    void my_put_h(void);
    //2d_char_array
    char *open_file(char const *, char *, int);
    char **my_str_to_char_array(char *buffer);
    void get_pos_o(place_t *place_o, char **map_in_tab, char *buffer);
    void get_pos_x(place_t *place_x, char **map_in_tab, char *buffer);
    int count_lines(char *buffer);
    int count_o(char *buffer);
    int count_x(char *buffer);
    void put_o(char *buffer, char **map_in_tab, place_t *place_o);
    //ncurses
    int display_ncurses(char **map_in_tab, char *buffer, player_t *player,
    place_t *place_o);
    void print_map(char *buffer, char **map);
    int check_win(place_t *place_o, place_t *place_x, char *buffer);
    void events(char **char_tab, player_t *player);
    //player
    void player_place(char **char_tab, char *buffer, player_t *player);
    void player_up(char **char_tab, player_t *player);
    void player_down(char **char_tab, player_t *player);
    void player_right(char **char_tab, player_t *player);
    void player_left(char **char_tab, player_t *player);

#endif /* !SOKOBAN_H_ */
