/*
** EPITECH PROJECT, 2022
** tests
** File description:
** criterion
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "project.h"

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

// Test("nom_de_la_fonction", "description_du_test", .init=redirect_all_stdout)
// {
//     arguments (ac, av, str...)

//     "nom_de_la_fonction("arguments");
//     cr_assert....
// }

TEST PRINTF:
// Test("nom_de_la_fonction", "description_du_test", .init=redirect_all_stdout)
// {
//     arguments (ac, av, str...)

//     "nom_de_la_fonction("arguments");
//     fflush(stdout);
//     cr_assert....
// }


Test(USNameformatter, test_sortie_fonction, .init=redirect_all_stdout)
{
    int ac = 2;
    char *av[2] = {"./USNameformatter", "OUI bonjour"};

    USNameformatter(av);
    cr_assert_stdout_eq_str("Oui Bonjour\n")
}

Test(USNameformatter, test_sortie_erreur, .init=redirect_all_stdout)
{
    int ac = 1;
    char *av[2] = {"./USNameformatter", "OUI bonjour"};

    USNameformatter(av);
    cr_assert_stderr_eq_str("Usage: USNameFormatter string\n");
}
