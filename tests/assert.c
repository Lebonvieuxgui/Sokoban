/*
** EPITECH PROJECT, 2022
** delivery
** File description:
** assert
*/

cr_assert_str_eq(Actual, Reference)
cr_assert_str_neq(Actual, Reference)
cr_assert_arr_eq(Actual, Expected, Size)
cr_assert_arr_neq(Actual, Expected, Size)


#include <criterion/criterion.h>
#include <criterion/redirect.h>

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

int error(void)
{
        write(2, "error", 5);
        return(0);
}

Test(errors, exit_code, .init=redirect_all_stdout)
{
        error();
        cr_assert_stderr_eq_str("error", "");
}
