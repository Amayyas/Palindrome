/*
** EPITECH PROJECT, 2025
** SYN Palindrome
** File description:
** Main function for palindrome project
*/

#include "../my.h"

int main(int argc, char **argv)
{
    params_t params = {0, 0, 10, 0, 100, false, false};

    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        display_help();
        return 0;
    }
    if (parse_arguments(argc, argv, &params) == 84) {
        return 84;
    }
    if (validate_params(&params) == 84) {
        return 84;
    }
    process_params(&params);
    return 0;
}
