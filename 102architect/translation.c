/*
** EPITECH PROJECT, 2019
** 102architect
** File description:
** translation
*/

#include "my.h"

int translation(char **av)
{
    av[3][0] = '-';
    av[3][1] = 't';
    float i = atof(av[4]);
    float j = atof(av[5]);
    float x = atof(av[1]);
    float y = atof(av[2]);

    printf("Translation along vector (%.0f, %.0f)\n", i, j);
    printf("1.00\t0.00\t%.2f\n0.00\t1.00\t%.2f\n0.00\t0.00\t1.00", i, j);
    printf("\n(%.2f, %.2f) => ", x, y );
    x = x + i;
    y = y + j;
    printf("(%.2f, %.2f)\n", x, y);
    return (0);
}

void help(int ac, char **av)
{
    printf("USAGE\n\t./102architect x y transfo1 arg11 [arg12] [transfo2 arg12 [arg22]] ...");
    printf("\n\nDESCRIPTION\n\tx\tabscissa of the original point\n\ty\tordinate of the original point");
    printf("\n\n\ttransfo\targ1 [arg2]\n\t-t i j\t translation along vector (i, j)\n\t-z m n\t");
    printf("scaling by factors m (x-axis) and n (y-axis)\n\t-r d\t rotation centered in O by a d degree angle");
    printf("\n\t-s d\treflection over the axis passing through O with an ");
    printf("inclination angle of d degrees");
}