/*
** EPITECH PROJECT, 2023
** check_end_game.c
** File description:
** check_end_game
*/
#include "my.h"
#include "my_sokoban.h"

int get_nb_o(char **saved_map, int nb_rows)
{
    int nb_o = 0;
    int i = 0;
    int j;

    while (i != nb_rows) {
        j = 0;
        while (saved_map[i][j] != '\n') {
            nb_o += (saved_map[i][j] == 'O');
            j++;
        }
        i++;
    }
    return nb_o;
}

int get_nb_x(char **map, int nb_rows)
{
    int nb_x = 0;
    int i = 0;
    int j;

    while (i != nb_rows) {
        j = 0;
        while (map[i][j] != '\n') {
            nb_x += (map[i][j] == 'X');
            j++;
        }
        i++;
    }
    return nb_x;
}

int check_end_game_victory(char **map, char **saved_map, int nb_rows)
{
    int cmt = 0;
    int nb_o = get_nb_o(saved_map, nb_rows);
    int i = 0;
    int j = 0;

    while (i != nb_rows && saved_map[i][j] != '\n') {
        cmt += (saved_map[i][j] == 'O' && map[i][j] == 'X');
        j++;
        if (saved_map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return (cmt == nb_o) ? 0 : 1;
}

int check_stuck(char **map, int i, int j)
{
    if ((map[i][j - 1] == '#' || map[i][j - 1] == 'X') &&
        (map[i - 1][j] == '#' || map[i - 1][j] == 'X'))
        return (1);
    if ((map[i][j - 1] == '#' || map[i][j - 1] == 'X') &&
        (map[i + 1][j] == '#' || map[i + 1][j] == 'X'))
        return (1);
    if ((map[i][j + 1] == '#' || map[i][j + 1] == 'X') &&
        (map[i - 1][j] == '#' || map[i - 1][j] == 'X'))
        return (1);
    if ((map[i][j + 1] == '#' || map[i][j + 1] == 'X') &&
        (map[i + 1][j] == '#' || map[i + 1][j] == 'X'))
        return (1);
    return (0);
}

int check_end_game_defeat(char *buffer, char **map)
{
    int nb_rows = get_nb_rows(buffer);
    int nb_x = get_nb_x(map, nb_rows);
    int nb_x_stuck = 0;
    int i = 0;
    int j = 0;

    while (i != nb_rows) {
        while (map[i][j] != '\n') {
            nb_x_stuck += (map[i][j] == 'X' && check_stuck(map, i, j) == 1);
            j++;
        }
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    return (nb_x_stuck == nb_x) ? 1 : 0;
}
