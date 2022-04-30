/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** player_movement
*/

#include "sokoban.h"

void player_up(char **char_tab, player_t *player)
{
    if (char_tab[player->y - 1][player->x] == ' '
    || char_tab[player->y - 1][player->x] == 'O') {
        char_tab[player->y - 1][player->x] = 'P';
        char_tab[player->y][player->x] = ' ';
    } else if (char_tab[player->y - 1][player->x] == 'X'
    && (char_tab[player->y - 2][player->x] == ' '
    || char_tab[player->y - 2][player->x] == 'O')) {
        char_tab[player->y - 1][player->x] = 'P';
        char_tab[player->y][player->x] = ' ';
        char_tab[player->y - 2][player->x] = 'X';
    }
}

void player_down(char **char_tab, player_t *player)
{
    if (char_tab[player->y + 1][player->x] == ' '
    || char_tab[player->y + 1][player->x] == 'O') {
        char_tab[player->y + 1][player->x] = 'P';
        char_tab[player->y][player->x] = ' ';
    } else if (char_tab[player->y + 1][player->x] == 'X'
    && (char_tab[player->y + 2][player->x] == ' '
    || char_tab[player->y + 2][player->x] == 'O')) {
        char_tab[player->y + 1][player->x] = 'P';
        char_tab[player->y][player->x] = ' ';
        char_tab[player->y + 2][player->x] = 'X';
    }
}

void player_right(char **char_tab, player_t *player)
{
    if (char_tab[player->y][player->x + 1] == ' '
    || char_tab[player->y][player->x + 1] == 'O') {
        char_tab[player->y][player->x + 1] = 'P';
        char_tab[player->y][player->x] = ' ';
    } else if (char_tab[player->y][player->x + 1] == 'X'
    && (char_tab[player->y][player->x + 2] == ' '
    || char_tab[player->y][player->x + 2] == 'O')) {
        char_tab[player->y][player->x + 1] = 'P';
        char_tab[player->y][player->x] = ' ';
        char_tab[player->y][player->x + 2] = 'X';
    }
}

void player_left(char **char_tab, player_t *player)
{
    if (char_tab[player->y][player->x - 1] == ' '
    || char_tab[player->y][player->x - 1] == 'O') {
        char_tab[player->y][player->x - 1] = 'P';
        char_tab[player->y][player->x] = ' ';
    } else if (char_tab[player->y][player->x - 1] == 'X'
    && (char_tab[player->y][player->x - 2] == ' '
    || char_tab[player->y][player->x - 2] == 'O')) {
        char_tab[player->y][player->x - 1] = 'P';
        char_tab[player->y][player->x] = ' ';
        char_tab[player->y][player->x - 2] = 'X';
    }
}
