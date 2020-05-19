/*
** EPITECH PROJECT, 2018
** error
** File description:
** error gestion
*/

#include "my.h"

int error(int ac, char **av)
{
    if (ac > 1) {
        if (av[1][1] == 'h') {
            my_putstr("USAGE\n");
            my_putstr("    ./103cipher message key flag\n\n");
            my_putstr("DESCRIPTION\n");
            my_putstr("    message    a message, made of ASCII characters\n");
            my_putstr("    key        the encryption key, made of ASCII characters\n");
            my_putstr("    flag       0 for the message to be encrypted, 1 to be decrypted");
            return (84);
        }
        else if (ac < 4) {
            my_putstr("Error : Not enough arguments\n");
            return (84);
        }
        else if (ac > 4) {
            my_putstr("Error : Too many arguments\n");
            return (84);
        }
    }
    return (0);
}
