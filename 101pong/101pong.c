#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int ac, char **av)
{
    if (ac != 8) {
        if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
            printf("USAGE\n\t./101pong x0 y0 z0 x1 y1 z1 n\n\n");
            printf("DESCRIPTION\n\tx0  ball abscissa at time t - 1\n\ty0  ball ordinate at time t - 1\n\tz0  ball altitude at time t - 1\n\tx1  ball abscissa at time t\n\ty1  ball ordinate at time t\n\tz1  ball altitude at time t\n\tn   time shift (greater than or equal to zero, integer)\n");
            return (0);
        }
        else {
            write(1, "Need 7 arguments. No more, No less.\n", 36);
            write(1, "For more info, use : ./101pong -h\n", 34);
            return (84);
        }
    }
    float x0 = strtof(av[1], NULL);
    float y0 = strtof(av[2], NULL);
    float z0 = strtof(av[3], NULL);
    float x1 = strtof(av[4], NULL);
    float y1 = strtof(av[5], NULL);
    float z1 = strtof(av[6], NULL);
    unsigned int n = strtoul(av[7], NULL, 10);
    float xv = x1 - x0;
    float yv = y1 - y0;
    float zv = z1 - z0;
    float tx = xv * (n + 1) + x0;
    float ty = yv * (n + 1) + y0;
    float tz = zv * (n + 1) + z0;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f,%.2f,%.2f)\n", xv, yv, zv);
    printf("At time t + %ld, ball coordinates will be:\n", n);
    printf("(%.2f,%.2f,%.2f)\n", tx, ty, tz);
    if (tx > 0)
        printf("The ball won’t reach the bat.\n");
    return (0);
}
