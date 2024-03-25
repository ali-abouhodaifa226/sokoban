/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my
*/

#ifndef __MY_H__
    #define __MY_H__

    #include <unistd.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);

#endif /*__MY_H__*/
