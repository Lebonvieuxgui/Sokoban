/*
** EPITECH PROJECT, 2022
** B-PSU-200-BDX-2-1-mysokoban-guillaume.lebreton
** File description:
** main
*/

#include "sokoban.h"

int main(int ac, char **av)
{
    check_error(ac);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_put_h();
        return (SUCCESS);
    }
    my_sokoban(av[1]);
}
