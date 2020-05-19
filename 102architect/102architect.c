/*
** EPITECH PROJECT, 2018
** 102architect
** File description:
** main
*/

#include "my.h"

int scaling(char **av)
{
    av[3][0] = '-';
    av[3][1] = 'z';
    float x = atof(av[1]);
    float y = atof(av[2]);
    float m = atof(av[4]);
    float n = atof(av[5]);

    printf("Scaling by factors %.0f and %.0f\n", m, n);
    printf("%.2f\t0.00\t0.00\n0.00\t%.2f\t0.00\n0.00\t0.00\t1.00\n", m, n);
    printf("(%.2f, %.2f) => ", x, y );
    x = x * m;
    y = y * n;
    printf("(%.2f, %.2f)\n", x, y);
    return (0);
}

int rotation(char **av)
{
    av[3][0] = '-';
    av[3][1] = 'r';
    double x = atof(av[1]);
    double y = atof(av[2]);
    int angle = atoi(av[4]);
    double a = (cos(angle * M_PI/180) * x) + (-sin(angle * M_PI/180) * y);
    double b = sin(angle * M_PI/180) * x + cos(angle * M_PI/180) * y;

    printf("Rotation by a %d angle\n", angle);
    printf("%.2f\t%.2f\t0.00\n%.2f\t%.2f\t0.00\n0.00\t0.00\t1.00\n", cos(angle * M_PI/180), -sin(angle * M_PI/180), sin(angle * M_PI/180), cos(angle * M_PI/180));
    printf("(%.2f, %.2f) => ", x, y);
    printf("(%.2f, %.2f)\n", a, b);
    return (0);
}

int reflexion(char **av)
{
    av[3][0] = '-';
    av[3][1] = 's';
    double x = atof(av[1]);
    double y = atof(av[2]);
    int angle1 = atoi(av[4]);

    printf("Reflection over an axis with an inclination angle of %d degrees\n", angle1);
    printf("%.2f\t%.2f\t0.00\n%.2f\t%.2f\t0.00\n0.00\t0.00\t1.00\n", sin(angle1 * M_PI/180), -cos(angle1 * M_PI/180), -cos(angle1 * M_PI/180), -sin(angle1 * M_PI/180));
    printf("(%.2f, %.2f) => ", x, y);
    printf("(%.2f, %.2f)\n", -x, y);
    return (0);
}

int architect(char **av)
{
    float x = atof(av[1]);
    float y = atof(av[2]);
    av[3][0] = '-';
    av[3][1] = 't';
    float i = atof(av[4]);
    float j = atof(av[5]);
    av[6][0] = '-';
    av[6][1] = 'z';
    float m = atof(av[7]);
    float n = atof(av[8]);
    av[9][0] = '-';
    av[9][1] = 'r';
    int angle = atoi(av[10]);
    av[11][0] = '-';
    av[11][1] = 's';
    int angle1 = atoi(av[12]);
    float a = cos(angle1 * M_PI/180) * x + (-sin(angle * M_PI/180) * y);
    float b = sin(angle1 * M_PI/180) * x + cos(angle * M_PI/180) * y;
    float x0 = m;
    float y0 = 0;
    float z0 = 0;
    float x1 = 0;
    float y1 = n;
    float z1 = 0;
    float x2 = i;
    float y2 = j;
    float z2 = 1;
    float xx0 = x0 * cos(angle*M_PI/180)+x1 * sin(angle*M_PI/180);
    float yy0 = y0 * cos(angle*M_PI/180)+y1 * sin(angle*M_PI/180);
    float zz0 = z0 * cos(angle*M_PI/180)+z1 * sin(angle*M_PI/180);
    float xx1 = x0 * -sin(angle*M_PI/180)+x1 * cos(angle*M_PI/180);
    float yy1 = y0 * -sin(angle*M_PI/180)+y1 * cos(angle*M_PI/180);
    float zz1 = z0 * -sin(angle*M_PI/180)+z1 * cos(angle*M_PI/180);
    float xx2 = x2;
    float yy2 = y2;
    float zz2 = z2;
    float xxx0 = xx0 * sin(angle1*M_PI/180) + xx1 * -cos(angle1*M_PI/180);
    float yyy0 = (yy0 * sin(angle1*M_PI/180) + yy1 * -cos(angle1*M_PI/180))/2;
    float zzz0 = zz0 * sin(angle1*M_PI/180) + zz1 * -cos(angle1*M_PI/180);
    float xxx1 = (xx0 * -cos(angle1*M_PI/180) + xx1 * -sin(angle1*M_PI/180))*2;
    float yyy1 = yy0 * -cos(angle1*M_PI/180) + yy1 * -sin(angle1*M_PI/180);
    float zzz1 = (zz0 * -cos(angle1*M_PI/180) + zz1 * -sin(angle1*M_PI/180))*-1;
    float xxx2 = xx2;
    float yyy2 = yy2;
    float zzz2 = zz2;
    float res1 = xxx0 * x + xxx1 * y + xxx2;
    float res2 = yyy0 * x + yyy1 * y + yyy2;

    printf("Translation along vector (%0.f, %0.f)\n", i, j);
    printf("Scaling by factors %0.f and %0.f\n", m, n);
    printf("Rotation by a %d degree angle\n", angle);
    printf("Reflection over an axis with an inclination angle of %d degrees\n", angle1);
    printf("%.2f\t%.2f\t%.2f\n%.2f\t%.2f\t%.2f\n", xxx0, xxx1, xxx2, yyy0, yyy1, yyy2);
    printf("%.2f\t%.2f\t%.2f\n", zzz0, zzz1, zzz2);
    printf("(%.2f, %.2f) => (%.2f, %.2f)\n", x, y, res1, res2);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        help(ac, av);
    else if (ac == 13) {
        if (av[6][0] == '-' &&
        av[6][1] == 'z' && av[9][0] == '-' && av[9][1] == 'r' &&
        av[11][0] == '-' && av[11][1] == 's')
            architect(av);
    }
    else if (ac == 6) {
        if (av[3][0] == '-' && av[3][1] == 't')
            translation(av);
        if (av[3][0] == '-' && av[3][1] == 'z')
            scaling(av);
    }
    else if (ac == 5) {
        if (av[3][0] == '-' && av[3][1] == 'r')
            rotation(av);
        if (av[3][0] == '-' && av[3][1] == 's')
            reflexion(av);
    }
    else {
        write(2, "Try for more info : ./102architect -h", 1);
        return (84);
    }
    return (0);
}
