/*
** EPITECH PROJECT, 2023
** finish_line.c
** File description:
** BY - CM
*/

#include "n4s.h"
#include <string.h>

int finish_line(char const *str)
{
    if (str == NULL)
        return FALSE;
    if (strcmp("Track Cleared", str) == 0)
        return TRUE;
    return FALSE;
}
