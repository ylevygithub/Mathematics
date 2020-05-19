/*
** EPITECH PROJECT, 2018
** message
** File description:
** message part
*/

#include "my.h"

int main(int ac, char **av)
{
    int **matrice;
    int buff[] = {12, 212121, 221, 323232};
    matrice = message(buff);
    my_print_tab(matrice);
    return 0;
}

int **message(int *buff)
{
    int **matrice = malloc(sizeof(int *) * (count_line(buff) + 1));
    if (matrice == NULL)
        return (NULL);
    int column = column_size(buff);
    int it = 0;
    int i = 0;
    int j = 0;
    buff_to_tab(buff);
    matrice[i] = NULL;
    free(buff);
    return (matrice);
}

void my_print_tab(int **tab)
{
    int it = 0;
    while (tab[it]) {
        printf("%d", tab[it]);
        printf("%c", ' ');
        it++;
    }
}

void buff_to_tab(int *buff)
{
    int **matrice;
    int it;
    int i;
    int j;
    int column = column_size(buff);
    while (i < count_line(buff)) {
        matrice[i] = malloc(sizeof(int) * (column + 1));
        while (buff[it] != ' ') {
            matrice[i][j] = buff[it];
            j++;
            it++;
        }
        matrice[i][j] = '\0';
        i++;
        j = 0;
        it++;
    }
}

int count_line(int *buff)
{
    int i = 0;
    int j = 0;

    while (buff[i] != '\0') {
        if (buff[i] == '\n')
            j++;
        i++;
    }
    return (j);
}

int column_size(int *buff)
{
    int i;

    while (buff[i] != '\n')
        i++;
    return (i);
}
