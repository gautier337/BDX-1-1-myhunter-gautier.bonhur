/*
** EPITECH PROJECT, 2021
** errors_handler
** File description:
** my_hunter
*/

#include "../includes/my.h"

int check_errors(struct_params_t my_struct)
{
    if (!my_struct.window)
        return 84;

    if (!my_struct.texture || !my_struct.texture_bird)
        return 84;
    return 0;
}