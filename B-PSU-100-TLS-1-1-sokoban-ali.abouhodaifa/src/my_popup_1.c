/*
** EPITECH PROJECT, 2023
** my_popup_1.c
** File description:
** annex my_popup
*/
#include "my.h"
#include "my_sokoban.h"

void display(char **map, char *buffer)
{
    int nb_rows = get_nb_rows(buffer);
    int nb_cols = get_nb_cols(buffer);
    char *msg = "Too Small !!!";
    int size = my_strlen(msg);

    if (LINES < nb_rows + 2 || COLS < nb_cols + 2)
        mvprintw(LINES / 2, (COLS / 2) - (size / 2), msg);
    else
    for (int i = 0; i < nb_rows; i++)
    mvprintw(LINES / 2 - nb_rows / 2 + i, COLS / 2 - nb_cols / 2, map[i]);
}
