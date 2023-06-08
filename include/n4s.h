/*
** EPITECH PROJECT, 2022
** B-AIA-200-REN-2-1-n4s-florian.trillaud
** File description:
** n4s.h
*/

#ifndef N4S_H
    #define N4S_H

    #include <unistd.h>
    #include <sys/types.h>
    #include <stdio.h>
    #include <stdlib.h>

    #define UINT unsigned int
    #define TRUE (1)
    #define FALSE (0)
    #define START ("START_SIMULATION\n")
    #define STOP ("STOP_SIMULATION\n")
    #define FORW ("CAR_FORWARD: ")
    #define BACK ("CAR_BACKWARD: ")
    #define DIRE ("WHEELS_DIR: ")
    #define INFO ("GET_INFO_LIDAR\n")
    #define CU_SP ("GET_CURRENT_SPEED\n")
    #define CU_WH ("GET_CURRENT_WHEELS\n")
    #define WAIT ("CYCLE_WAIT\n")
    #define SPEED_MAX ("GET_CAR_SPEED_MAX\n")
    #define SPEED_MIN ("GET_CAR_SPEED_MIN\n")
    #define STIME ("GET_INFO_SIMTIME\n")

    typedef struct n4s_s {

        float *lidinfo;
        int id;
        char *status;
        char *infos;
        double av;

    } n4s_t;

//finish_line.c
    int finish_line(char const *str);

//get_lidinfo.c
    int get_info(n4s_t *n4s);
    int get_lidinfo(n4s_t *n4s);

//my_n4s.c
    void init_n4s(n4s_t *n4s);
    void free_n4s(n4s_t *n4s);
    int run(n4s_t *n4s, char *str);
    void my_n4s(n4s_t *n4s);

//process_direction.c
    double change_direction(n4s_t *n4s);
    int run_direction(n4s_t *n4s, double val_dir);
    int process_direction(n4s_t *n4s);

//process_speed.c
    int run_backward(n4s_t *n4s, double value_speed);
    int run_forward(n4s_t *n4s, double value_speed);
    int process_speed(n4s_t *n4s);

#endif
