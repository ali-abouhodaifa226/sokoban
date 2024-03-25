/*
** EPITECH PROJECT, 2023
** move_management.c
** File description:
** movment keys managing
*/
#include "my.h"
#include "my_sokoban.h"

char **move_management(int input, char **map, int nb_rows, char **saved_map)
{
    switch (input) {
    case 67:
        map = move_right(map, nb_rows, saved_map);
        break;
    case 68:
        map = move_left(map, nb_rows, saved_map);
        break;
    case 65:
        map = move_up(map, nb_rows, saved_map);
        break;
    case 66:
        map = move_down(map, nb_rows, saved_map);
        break;
    default:
        break;
    }
    return (map);
}
