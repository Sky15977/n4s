/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-n4s-florian.trillaud
** File description:
** lib.h
*/

#ifndef LIB_H
    #define LIB_H

    #include <stddef.h>
    #include <stdlib.h>

    #define TRUE (1)
    #define FALSE (0)
    #define UINT unsigned int

    void my_show_word_array(char **tab);
    char **my_stw(char *str, char *sep);
    int my_array_len(char **array);

    void cm_freetab(char **tab);
    void cm_puttab(char **tab);
    char *cm_strdup(char const *src);
    char **cm_strtok(char const *str, char const *sep);

#endif
