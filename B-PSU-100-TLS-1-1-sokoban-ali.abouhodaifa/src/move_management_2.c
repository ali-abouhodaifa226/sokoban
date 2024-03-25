/*
** EPITECH PROJECT, 2023
** move_management_2.c
** File description:
** managing moving actions
*/
#include "my.h"
#include "my_sokoban.h"

char **move_left(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i != nb_rows && map[i][j] != 'P') {
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        } else {
            j++;
        }
    }
    if (i != nb_rows) {
        pi = i;
        pj = j;
        left_management(map, pi, pj, saved_map);
    }
    return map;
}

char **move_right(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i != nb_rows && map[i][j] != '\n' && map[i][j] != 'P') {
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    if (i != nb_rows) {
        pi = i;
        pj = j;
        right_management(map, pi, pj, saved_map);
    }
    return map;
}

char **move_down(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i != nb_rows && map[i][j] != '\n' && map[i][j] != 'P') {
        j++;
        if (map[i][j] == '\n') {
            i++;
            j = 0;
        }
    }
    if (i != nb_rows) {
        pi = i;
        pj = j;
        down_management(map, pi, pj, saved_map);
    }
    return map;
}

char **move_up(char **map, int nb_rows, char **saved_map)
{
    int pi = 0;
    int pj = 0;
    int i = 0;
    int j = 0;

    while (i < nb_rows) {
        j = 0;
        while (map[i][j] != '\n' && map[i][j] != 'P') {
            j++;
        }
        if (map[i][j] == 'P') {
            pi = i;
            pj = j;
            break;
        }
        i++;
    }
    up_management(map, pi, pj, saved_map);
    return map;
}
