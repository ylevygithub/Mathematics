/*
** EPITECH PROJECT, 2018
** main
** File description:
** main function
*/

#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int help(int ac, char **av)
{
    my_putstr("USAGE\n\t./103cipher message key flag\n\n");
    my_putstr("DESCRIPTION\n\tmessage\ta message, made of ASCII characters");
    my_putstr("\n\tkey\tthe encryption key, made of ASCII characters\n\t");
    my_putstr("flag\t0 for the message to be encrypted, 1 to be decrypted");
    return (0);
}

int main(int ac, char **av)
{
    char *mes;
    char *key = malloc(sizeof(char) * (strlen(av[2]) + 1));
    int flag;
    int i = 0;

    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help(ac, av);
    else if (ac == 4) {
        mes = av[1];
        key = av[2];
        av[3] = "0";
        printf("key matrix :\n");
        while (key[i] != '\0') {
            if (key[i] == av[2][3] || key[i] == av[2][6])
                printf("\n");
            printf("%d ", key[i]);
            i++;
        }
        key[i] = '\0';
    }
    else {
        write(2, "Try : ./103cipher -h\n", 1);
        return (84);
    }
    return (0);
}
