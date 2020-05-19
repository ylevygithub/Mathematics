#include <math.h>
//#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void transformation(float x0, float y0, float z0, float x1, float y1, float z1, float n)
{
    char **av;
    x0 = strtof(av[1], NULL);
    y0 = strtof(av[2], NULL);
    z0 = strtof(av[3], NULL);
    x1 = strtof(av[4], NULL);
    y1 = strtof(av[5], NULL);
    z1 = strtof(av[6], NULL);
    n = strtof(av[7], NULL);
}
void pong(float x0, float y0, float z0, float x1, float y1, float z1, float n)
{
    transformation(x0, y0, z0, x1, y1, z1, n);
    float xv = x1 - x0;
    float yv = y1 - y0;
    float zv = z1 - z0;
    float tx = xv * (n + 1) + x0;
    float ty = yv * (n + 1) + y0;
    float tz = zv * (n + 1) + z0;

    printf("The velocity vector of the ball is:\n");
    printf("(%f,%f,%f)\n", xv, yv, zv);
    printf("At time t + %d, ball coordinates will be:\n", n);
    printf("(%f,%f,%f)\n", tx, ty, tz);
}

int     main(float x0, float y0, float z0, float x1, float y1, float z1, float n)
{
    pong(x0, y0, z0, x1, y1, z1, n);
    return 0;
}
