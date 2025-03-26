/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** Utility functions for palindrome operations
*/

#include "../my.h"

long long reverse_number(long long num, int base)
{
    long long reversed = 0;

    while (num > 0) {
        reversed = reversed * base + (num % base);
        num /= base;
    }
    return reversed;
}

bool is_palindrome(long long num, int base)
{
    return (num == reverse_number(num, base));
}

int find_palindrome(long long n, int base, int max_iter, long long *result)
{
    int iterations = 0;
    long long reversed = 0;

    while (iterations <= max_iter) {
        if (is_palindrome(n, base)) {
            *result = n;
            return iterations;
        }
        reversed = reverse_number(n, base);
        n = n + reversed;
        iterations++;
    }
    return -1;
}

void find_numbers(long long pal, int base, int imin, int imax)
{
    bool solution_found = false;
    long long limit = pal * 2;
    long long result = 0;
    int i = 0;

    for (long long n = 0; n <= limit; n++) {
        i = find_palindrome(n, base, imax, &result);
        if (i != -1 && i >= imin && i <= imax && result == pal) {
            printf("%lld leads to %lld in %d iteration(s) in base %d\n",
                n, pal, i, base);
            solution_found = true;
        }
    }
    if (!solution_found) {
        printf("no solution\n");
    }
}
