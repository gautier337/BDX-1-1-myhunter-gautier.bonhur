/*
** EPITECH PROJECT, 2021
** define_time
** File description:
** my_hunter
*/

#include "../../includes/my.h"

struct_params_t set_time(struct_params_t my_struct)
{
    my_struct.time = sfClock_getElapsedTime(my_struct.timer);
    my_struct.time_size = sfClock_getElapsedTime(my_struct.timer_size);

    my_struct.seconds = my_struct.time.microseconds / 1000000.0;
    my_struct.seconds_size = my_struct.time_size.microseconds / 1000000.0;

    return my_struct;
}