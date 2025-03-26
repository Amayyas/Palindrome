/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** parser
*/

#include "../my.h"

int parse_flag(int argc, char **argv, int *i, params_t *params)
{
    if (strcmp(argv[*i], "-n") == 0) {
        return parse_n_flag(argc, argv, i, params);
    }
    if (strcmp(argv[*i], "-p") == 0) {
        return parse_p_flag(argc, argv, i, params);
    }
    if (strcmp(argv[*i], "-b") == 0) {
        return parse_b_flag(argc, argv, i, params);
    }
    if (strcmp(argv[*i], "-imin") == 0) {
        return parse_imin_flag(argc, argv, i, params);
    }
    if (strcmp(argv[*i], "-imax") == 0) {
        return parse_imax_flag(argc, argv, i, params);
    }
    printf("invalid argument\n");
    return 84;
}

int parse_arguments(int argc, char **argv, params_t *params)
{
    int i = 1;

    while (i < argc) {
        if (parse_flag(argc, argv, &i, params) == 84) {
            return 84;
        }
    }
    if (params->imin > params->imax) {
        printf("Error: imin cannot be greater than imax\n");
        return 84;
    }
    return 0;
}
