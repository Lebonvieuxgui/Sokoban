/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** open_file
*/

#include "sokoban.h"

char *open_file(char const *filepath, char *buffer, int size)
{
    int fd = open(filepath, O_RDONLY);
    if (fd < 0)
        exit (ERROR);
    int rd = read(fd, buffer, size);
    buffer[rd] = '\0';
    if (rd < 0)
        exit (ERROR);
    return (buffer);
}
