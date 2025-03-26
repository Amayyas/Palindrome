/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** parse_flags
*/

#include "../my.h"

int parse_n_flag(int argc, char **argv, int *i, params_t *params)
{
    if (*i + 1 >= argc || atoi(argv[*i + 1]) < 0) {
        printf("invalid argument\n");
        return 84;
    }
    params->n = atoll(argv[*i + 1]);
    params->n_flag = true;
    *i += 2;
    return 0;
}

int parse_p_flag(int argc, char **argv, int *i, params_t *params)
{
    if (*i + 1 >= argc || atoi(argv[*i + 1]) < 0) {
        printf("invalid argument\n");
        return 84;
    }
    params->p = atoll(argv[*i + 1]);
    params->p_flag = true;
    *i += 2;
    return 0;
}

int parse_b_flag(int argc, char **argv, int *i, params_t *params)
{
    if (*i + 1 >= argc || atoi(argv[*i + 1]) <= 1 || atoi(argv[*i + 1]) > 10) {
        printf("invalid argument\n");
        return 84;
    }
    params->base = atoi(argv[*i + 1]);
    *i += 2;
    return 0;
}

int parse_imin_flag(int argc, char **argv, int *i, params_t *params)
{
    if (*i + 1 >= argc || atoi(argv[*i + 1]) < 0) {
        printf("invalid argument\n");
        return 84;
    }
    params->imin = atoi(argv[*i + 1]);
    *i += 2;
    return 0;
}

int parse_imax_flag(int argc, char **argv, int *i, params_t *params)
{
    if (*i + 1 >= argc || atoi(argv[*i + 1]) < 0) {
        printf("invalid argument\n");
        return 84;
    }
    params->imax = atoi(argv[*i + 1]);
    *i += 2;
    return 0;
}
