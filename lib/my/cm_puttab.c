/*
** EPITECH PROJECT, 2023
** cm_puttab.c
** File description:
** BY - CM
*/

#include <stddef.h>
#include <stdio.h>

void cm_puttab(char **tab)
{
    if (tab == NULL)
        return;
    for (unsigned int y = 0; tab[y]; y++)
        dprintf(2, "tab[%i]: %s\n", y, tab[y]);
    dprintf(2, "\n");
}
