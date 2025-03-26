/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** my
*/

#ifndef INCLUDED_MY_H
    #define INCLUDED_MY_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>
    #include <unistd.h>

typedef struct params_s {
    long long n;
    long long p;
    int base;
    int imin;
    int imax;
    bool n_flag;
    bool p_flag;
} params_t;


void display_help(void);

int main(int argc, char **argv);

int validate_params(params_t *params);
void process_params(params_t *params);

int parse_n_flag(int argc, char **argv, int *i, params_t *params);
int parse_p_flag(int argc, char **argv, int *i, params_t *params);
int parse_b_flag(int argc, char **argv, int *i, params_t *params);
int parse_imin_flag(int argc, char **argv, int *i, params_t *params);
int parse_imax_flag(int argc, char **argv, int *i, params_t *params);

int parse_flag(int argc, char **argv, int *i, params_t *params);
int parse_arguments(int argc, char **argv, params_t *params);

long long reverse_number(long long num, int base);
bool is_palindrome(long long num, int base);
int find_palindrome(long long n, int base, int max_iter, long long *result);
void find_numbers(long long pal, int base, int imin, int imax);

#endif
