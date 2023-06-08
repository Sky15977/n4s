/*
** EPITECH PROJECT, 2022
** B-PSU-200-REN-2-1-minishell2-yann.morvan
** File description:
** my_stw.c
*/

#include <stdlib.h>

static int check_sep(char const c, char const *sep)
{
    for (int i = 0; sep[i]; i++) {
        if (c == sep[i])
            return 1;
    }
    return 0;
}

static int skip_sep(char const *str, int i, char const *sep)
{
    if (check_sep(str[i], sep) == 1) {
        for (; check_sep(str[i], sep) == 1; i++);
        i--;
    }
    return i;
}

static int count_words(char const *str, char const *sep)
{
    int cmp = 1;

    for (int i = 0; str[i]; i++, cmp++)
        i = skip_sep(str, i, sep);
    return cmp;
}

static int get_size(char const *str, int i, char const *sep)
{
    int len;

    for (; check_sep(str[i], sep) != 1 && str[i]; i++, len++);
    return len;
}

char **my_stw(char *str, char *sep)
{
    int nb_words = count_words(str, sep) + 2;
    char **tab = malloc(sizeof(char *) * nb_words + 1);
    int x = 0;
    int y = 0;

    for (int i = 0; str[i]; y++) {
        x = 0;
        for (; (check_sep(str[i], sep) != 0 && str[i]); i++);
        tab[y] = malloc(sizeof(char) * (get_size(str, i, sep) + 1));
        for (; check_sep(str[i], sep) == 0 && str[i]; i++, x++)
            tab[y][x] = str[i];
        tab[y][x] = '\0';
        for (; (check_sep(str[i], sep) != 0 && str[i]); i++);
    }
    tab[y] = NULL;
    return tab;
}
