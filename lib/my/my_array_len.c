/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-n4s-florian.trillaud
** File description:
** my_array_len.c
*/

#include <unistd.h>

int my_array_len(char **array)
{
    int i = 0;

    for (;array[i] != NULL; i++);
    return (i);
}
