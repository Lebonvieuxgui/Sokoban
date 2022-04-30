/*
** EPITECH PROJECT, 2021
** Newproject
** File description:
** basic_test
*/

#include "fizzbuzz.h"

void redirect_all_stdb(void)
{
    cr_redirect_stdout ();
    cr_redirect_stderr ();
}

Test(multiple_of_three, true, .init = redirect_all_stdb)
{
    int nb = 27;

    cr_assert_eq(multiple_of_three(nb), 0);
}

Test(multiple_of_three, false, .init = redirect_all_stdb)
{
    int nb = 8;

    cr_assert_eq(multiple_of_three(nb), 1);
}

Test(multiple_of_five, true, .init = redirect_all_stdb)
{
    int nb = 50;

    cr_assert_eq(multiple_of_five(nb), 0);
}

Test(multiple_of_five, false, .init = redirect_all_stdb)
{
    int nb = 63;

    cr_assert_eq(multiple_of_five(nb), 1);
}
