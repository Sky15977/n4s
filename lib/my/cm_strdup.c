/*
** EPITECH PROJECT, 2022
** my_strdup
** File description:
** Write a function that allocates memory
*/

#include "../../include/lib.h"

static int cm_strlen(char const *str)
{
    UINT i = 0;

    for (; str[i]; i++);
    return i;
}

char *cm_strdup(char const *src)
{
    UINT i = 0;
    char *dest;

    dest = malloc(sizeof(char) * (cm_strlen(src) + 1));
    for (; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
