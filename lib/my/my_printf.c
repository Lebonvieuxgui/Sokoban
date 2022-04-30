/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** my_printf
*/

#include "my.h"

int check_flag3(char flag, va_list args)
{
    switch (flag) {
        case 'b':
        int valueb = va_arg(args, int);
        my_putnbr_base(valueb, "01");
        break;
        case 'x':
        int valuex = va_arg(args, int);
        my_putnbr_base(valuex, "0123456789abcdef");
        break;
        case 'X':
        int valueX = va_arg(args, int);
        my_putnbr_base(valueX, "0123456789ABCDEF");
        break;
        default:
        return (84);
    }
    return (0);
}

int check_flag2(char flag, va_list args)
{
    switch (flag) {
        case 'c':
        char valuec  = va_arg(args, int);
        my_putchar(valuec);
        break;
        case 's':
        char * values = va_arg(args, char *);
        my_putstr(values);
        break;
        case 'o':
        int valueo = va_arg(args, int);
        my_putnbr_base(valueo, "01234567");
        break;
        default:
        check_flag3(flag, args);
        break;
    }
    return 0;
}

int find_flag(char flag, va_list(args))
{
    switch (flag) {
        case 'd':
        int value = va_arg(args, int);
        my_put_nbr(value);
        break;
        case 'i':
        value = va_arg(args, int);
        my_put_nbr(value);
        break;
        case 'u':
        int valueu = va_arg(args, unsigned int);
        my_put_nbr(valueu);
        break;
        default:
        check_flag2(flag, args);
        break;
    }
    return 0;
}

int my_printf(char *str, ...)
{
    int i = 0;

    va_list (args);
    va_start (args, *str);

    while (str[i] != '\0') {
        if (str[i] == '%') {
            i += 1;
            find_flag(str[i], args);
        } else {
            my_putchar(str[i]);
        }
        i += 1;
    }
    va_end (args);
    return (0);
}