/*
** EPITECH PROJECT, 2018
** message0
** File description:
** message part for decryption
*/

#include "my.h"
/*
int main(int ac, char **av)
{
    char **matrice;
    char *buff = av[1];
    matrice = message(buff);
    my_print_tab(matrice);
    return 0;
}

char **message(char *buff)
{
    char **matrice = malloc(sizeof(char *) * (count_line(buff) + 1));
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
void my_print_tab(char **tab)
{
    int it = 0;
    while (tab[it]) {
        printf("%s", tab[it]);
        printf("%c", '\n');
        it++;
    }
}
void buff_to_tab(char *buff)
{
    char **matrice;
    int it;
    int i;
    int j;
    int column = column_size(buff);
    while (i < count_line(buff)) {
        matrice[i] = malloc(sizeof(char) * (column + 1));
        while (buff[it] != '\n') {
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
int count_line(char *buff)
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

int column_size(char *buff)
{
    int i;
    
    while (buff[i] != '\n')
        i++;
    return (i);
}
