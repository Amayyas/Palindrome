/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** params
*/

#include "../my.h"

int validate_params(params_t *params)
{
    if (params->n_flag && params->p_flag) {
        printf("Error: -n and -p options are incompatible\n");
        return 84;
    }
    if (!params->n_flag && !params->p_flag) {
        printf("Error: either -n or -p option must be specified\n");
        return 84;
    }
    return 0;
}

void process_params(params_t *params)
{
    long long result = 0;
    int i = 0;

    if (params->n_flag) {
        i = find_palindrome(params->n, params->base, params->imax, &result);
        if (i == -1 || i > params->imax || i < params->imin) {
            printf("no solution\n");
            return;
        }
        printf("%lld leads to %lld in %d iteration(s) in base %d\n",
            params->n, result, i, params->base);
    }
    if (params->p_flag) {
        if (!is_palindrome(params->p, params->base)) {
            printf("Error: %lld is not a palindrome in base %d\n",
                params->p, params->base);
            return;
        }
        find_numbers(params->p, params->base, params->imin, params->imax);
    }
}
