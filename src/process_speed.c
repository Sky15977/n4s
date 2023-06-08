/*
** EPITECH PROJECT, 2023
** process_speed.c
** File description:
** BY - CM
*/

#include "n4s.h"

int run_backward(n4s_t *n4s, double value_speed)
{
    dprintf(1, "%s%.2f\n", BACK, value_speed);
    if (get_info(n4s) != FALSE)
        return TRUE;
    return FALSE;
}

int run_forward(n4s_t *n4s, double value_speed)
{
    dprintf(1, "%s%.2f\n", FORW, value_speed);
    if (get_info(n4s) != FALSE)
        return TRUE;
    return FALSE;
}

int process_speed(n4s_t *n4s)
{
    double value_speed = 1;

    if (get_lidinfo(n4s) != FALSE)
        return TRUE;
    if (n4s->lidinfo[15] <= 1400 || n4s->lidinfo[16] <= 1400)
        value_speed = 0.6;
    if (n4s->lidinfo[15] <= 1000 || n4s->lidinfo[16] <= 1000)
        value_speed = 0.4;
    if (n4s->lidinfo[15] <= 600 || n4s->lidinfo[16] <= 600)
        value_speed = 0.2;
    if (n4s->lidinfo[15] <= 400 || n4s->lidinfo[16] <= 400)
        value_speed = 0.1;
    if (n4s->lidinfo[15] <= 200 || n4s->lidinfo[16] <= 200)
        value_speed = 0.05;
    if (run_forward(n4s, value_speed) != FALSE)
        return TRUE;
    return FALSE;
}
