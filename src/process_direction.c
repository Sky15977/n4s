/*
** EPITECH PROJECT, 2023
** process_speed.c
** File description:
** BY - CM
*/

#include "lib.h"
#include "n4s.h"

double dir_neg(n4s_t *n4s)
{
    double dou = 0;

    if (n4s->lidinfo[15] <= 200 || n4s->lidinfo[16] <= 200)
        dou = -0.8;
    if (n4s->lidinfo[15] > 200 || n4s->lidinfo[16] > 200)
        dou = -0.4;
    if (n4s->lidinfo[15] > 400 || n4s->lidinfo[16] > 400)
        dou = -0.2;
    if (n4s->lidinfo[15] > 600 || n4s->lidinfo[16] > 600)
        dou = -0.1;
    if (n4s->lidinfo[15] > 1000 || n4s->lidinfo[16] > 1000)
        dou = -0.05;
    if (n4s->lidinfo[15] > 1400 || n4s->lidinfo[16] > 1400)
        dou = -0.005;
    return dou;
}

double dir_pos(n4s_t *n4s)
{
    double dou = 0;

    if (n4s->lidinfo[15] <= 200 || n4s->lidinfo[16] <= 200)
        dou = 0.8;
    if (n4s->lidinfo[15] > 200 || n4s->lidinfo[16] > 200)
        dou = 0.4;
    if (n4s->lidinfo[15] > 400 || n4s->lidinfo[16] > 400)
        dou = 0.2;
    if (n4s->lidinfo[15] > 600 || n4s->lidinfo[16] > 600)
        dou = 0.1;
    if (n4s->lidinfo[15] > 1000 || n4s->lidinfo[16] > 1000)
        dou = 0.05;
    if (n4s->lidinfo[15] > 1400 || n4s->lidinfo[16] > 1400)
        dou = 0.005;
    return dou;
}

double change_direction(n4s_t *n4s)
{
    double dou = 0;

    if (n4s->av < 0)
        dou = dir_neg(n4s);
    else
        dou = dir_pos(n4s);
    return dou;
}

int run_direction(n4s_t *n4s, double val_dir)
{
    dprintf(1, "%s%.2f\n", DIRE, val_dir);
    if (get_info(n4s) != FALSE)
        return TRUE;
    return FALSE;
}

int process_direction(n4s_t *n4s)
{
    double val_dir = 0;

    if (get_lidinfo(n4s) != FALSE)
        return TRUE;
    val_dir = change_direction(n4s);
    if (run_direction(n4s, val_dir) != FALSE)
        return TRUE;
    return FALSE;
}
