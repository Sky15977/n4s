/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-bsn4s-yann.morvan
** File description:
** main.c
*/

#include "n4s.h"

int main(void)
{
    n4s_t *n4s = malloc(sizeof(n4s_t));

    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
    init_n4s(n4s);
    my_n4s(n4s);
    return 0;
}
