/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** help
*/

#include "../my.h"

void display_help(void)
{
    printf("USAGE\n");
    printf("\t./palindrome -n number -p palindrome");
    printf(" [-b base] [-imin i] [-imax i]\n\n");
    printf("DESCRIPTION\n");
    printf("\t-n n\tinteger to be transformed (>=0)\n");
    printf("\t-p pal\tpalindromic number to be obtained");
    printf(" (incompatible with the -n\n");
    printf("\t\toption) (>=0)\n");
    printf("\t\tif defined, all fitting values of n will be output\n");
    printf("\t-b base\tbase in which the procedure will be executed");
    printf(" (1<b<=10) [def: 10]\n");
    printf("\t-imin i\tminimum number of iterations,");
    printf(" included (>=0) [def: 0]\n");
    printf("\t-imax i\tmaximum number of iterations,");
    printf(" included (>=0) [def: 100]\n");
}
