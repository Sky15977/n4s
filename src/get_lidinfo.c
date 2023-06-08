/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-n4s-florian.trillaud
** File description:
** get_lidinfo.c
*/

#include "n4s.h"
#include "lib.h"
#include <string.h>

int get_info(n4s_t *n4s)
{
    size_t len = 0;
    char *buff = NULL;
    char **tab = NULL;

    if (getline(&buff, &len, stdin) == -1)
        exit(84);
    tab = cm_strtok(buff, ":");
    n4s->status = strdup(tab[0]);
    n4s->id = atoi(tab[1]);
    n4s->infos = strdup(tab[3]);
    free(buff);
    cm_freetab(tab);
    if (finish_line(n4s->infos) != FALSE)
        return TRUE;
    return FALSE;
}

int get_lidinfo(n4s_t *n4s)
{
    size_t len = 0;
    char *lidar = NULL;
    char **info = NULL;

    n4s->lidinfo = malloc(sizeof(float) * 32);
    dprintf(1, INFO);
    if (getline(&lidar, &len, stdin) == -1)
        exit(84);
    info = cm_strtok(lidar, ":");
    n4s->status = strdup(info[0]);
    n4s->id = atoi(info[1]);
    for (int i = 3; i < 35; i++)
        n4s->lidinfo[i - 3] = atof(info[i]);
    n4s->infos = strdup(info[35]);
    n4s->av = n4s->lidinfo[0] - n4s->lidinfo[31];
    free(lidar);
    cm_freetab(info);
    if (finish_line(n4s->infos) != FALSE)
        return TRUE;
    return FALSE;
}
