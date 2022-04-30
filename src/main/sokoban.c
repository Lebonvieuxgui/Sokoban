/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** init
*/

#include "sokoban.h"

int my_sokoban(char *map)
{
    struct stat st;
    stat(map, &st);
    int size = st.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));
    buffer = open_file(map, buffer, size);
    // error_handling(buffer);
    char **map_in_tab = my_str_to_char_array(buffer);
    player_t *player = malloc(sizeof(player_t));
    player->x = 0;
    player->y = 0;
    place_t *place_o = malloc(sizeof(place_t) * count_o(buffer));
    get_pos_o(place_o, map_in_tab, buffer);
    if (display_ncurses(map_in_tab, buffer, player, place_o) == 1)
        return (FAILURE);
    return (SUCCESS);
}
