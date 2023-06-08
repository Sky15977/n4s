/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-n4s-florian.trillaud
** File description:
** my_n4s.c
*/

#include "n4s.h"
#include <string.h>
#include "lib.h"

void init_n4s(n4s_t *n4s)
{
    n4s->lidinfo = 0;
    n4s->id = 0;
    n4s->status = NULL;
    n4s->infos = NULL;
    n4s->av = 0;
}

void free_n4s(n4s_t *n4s)
{
    if (n4s->lidinfo != 0)
        free(n4s->lidinfo);
    if (!n4s->status)
        free(n4s->status);
    if (!n4s->infos)
        free(n4s->infos);
}

int run(n4s_t *n4s, char *str)
{
    dprintf(1, str);
    dprintf(2, str);
    if (get_info(n4s) != FALSE)
        return TRUE;
    return FALSE;
}

static void loop(n4s_t *n4s)
{
    if (process_speed(n4s) == TRUE) {
        dprintf(1, STOP);
        dprintf(2, STOP);
    } else if (process_direction(n4s) == TRUE) {
        dprintf(1, STOP);
        dprintf(2, STOP);
    }
    free_n4s(n4s);
}

void my_n4s(n4s_t *n4s)
{
    run(n4s, START);
    while (TRUE)
        loop(n4s);
    free_n4s(n4s);
    free(n4s);
}
