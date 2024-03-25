/*
** EPITECH PROJECT, 2023
** array.c
** File description:
** array
*/
#include "my.h"
#include "my_sokoban.h"
#include <errno.h>
#include <stdlib.h>
#include <curses.h>

int display_array(char **array, int nb_rows)
{
    for (int i = 0; i != nb_rows; i++)
        printw(array[i]);
    return (0);
}

char **malloc_2d_array(char *buffer)
{
    char **arr;
    int rows = get_nb_rows(buffer);
    int cols = get_nb_cols(buffer);
    int i = 0;

    arr = malloc(sizeof(char *) * rows + 1);
    for (i = 0; i != rows; i++)
        arr[i] = malloc(sizeof(char) * cols + 1);
    arr[i] = NULL;
    return (arr);
}

long file_size(char const *filepath)
{
    struct stat s;

    stat(filepath, &s);
    return (s.st_size);
}

char *open_read_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    int size = file_size(filepath);
    int ret;

    buffer = malloc(sizeof(char) * (size + 1));
    if (fd == -1) {
        my_putstr("Error : Open failed !\n");
        return (NULL);
    }
    ret = read(fd, buffer, size);
    if (ret == -1) {
        my_putstr("Error : Invalid return of read !\n");
        return (NULL);
    }
    buffer[size] = '\0';
    if (close(fd) == -1)
        return (NULL);
    return (buffer);
}
