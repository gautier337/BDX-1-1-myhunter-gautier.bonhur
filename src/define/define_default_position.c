/*
** EPITECH PROJECT, 2021
** default position
** File description:
** my_hunter
*/

#include "../../includes/my.h"

duck_settings_pos_t define_default_position(duck_settings_pos_t struct_duck)
{
    struct_duck.i = 0;
    struct_duck.y = - 100;
    struct_duck.x = 1900;
    struct_duck.w = 0.3;
    struct_duck.count = 0;
    struct_duck.speed = 8;
    struct_duck.score = 0;

    return struct_duck;
}