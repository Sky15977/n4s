/*
** EPITECH PROJECT, 2023
** cm_freetab.c
** File description:
** BY - CM
*/

#include <stdlib.h>

void cm_freetab(char **tab)
{
    if (tab == NULL)
        return;
    for (unsigned int y = 0; tab[y]; y++)
        free(tab[y]);
    free(tab);
}
