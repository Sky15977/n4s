/*
** EPITECH PROJECT, 2022
** MY_SHOW_ARRAY
** File description:
** descr
*/

#include <unistd.h>
#include <stdio.h>

static int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);

    return i;
}

void my_show_word_array(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        dprintf(2, tab[i]);
        dprintf(2, "\n");
    }
}
