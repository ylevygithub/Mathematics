/*
** EPITECH PROJECT, 2018
** key
** File description:
** key part for encryption
*/

//#include "my.h"
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void getthekey()
{
/*    int i;
    char key[256];

    i = atoi(key);
    printf("The value entered is %d", i);
*/
    char *str = malloc(sizeof(char) + 1);
    int i = 0;
    while (str[i] != '\0') {
        printf("%d\n", str[i]);
        i++;
    }
    str[i] = '\0';
    //printf("%d", strtod(key, NULL));
}
