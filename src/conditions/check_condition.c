/*
** EPITECH PROJECT, 2021
** check_condition
** File description:
** my_hunter
*/

#include "../../includes/my.h"

duck_settings_pos_t set_two(duck_settings_pos_t sd, struct_params_t ms)
{
    if (ms.seconds > 0.010) {
        sd.y = sd.y + 0.05;
        sd.x = sd.x - sd.speed;
    }
    if (ms.seconds > 0.08)
        sd.i = sd.i + 1000;
    if (sd.i == 4000)
            sd.i = 0;
    sd = button_and_clic(ms.window, sd);
    return sd;
}

duck_settings_pos_t setstruct_duck(duck_settings_pos_t sd, struct_params_t ms)
{
    if (sd.count == 3) {
        sd.count = 0;
        sd.y = 500;
    }
    sd.w = (sd.w < 0.1) ? 0.3 : sd.w;
    if (sd.x < - 300) {
        sd.speed = 8;
        sd.count++;
        sd.x = 1940;
        sd.y = rand() % 800 + 0;
    }
    if (sd.y > 1100 || sd.y < -100)
        sd.y = rand() % 800 + 0;
    if (ms.seconds_size > 0.5)
        sd.w = sd.w - 0.001;
    sd = set_two(sd, ms);
    return sd;
}

struct_params_t set_counter(duck_settings_pos_t s, struct_params_t my_struct)
{
    if (s.count == 0)
        sfSprite_setTexture(my_struct.sprite, my_struct.texture, sfTrue);
    if (s.count == 1)
        sfSprite_setTexture(my_struct.sprite, my_struct.texture_two, sfTrue);
    if (s.count == 2)
        sfSprite_setTexture(my_struct.sprite, my_struct.texture_three, sfTrue);
    if (my_struct.seconds > 0.18)
        my_struct.rect = define_rect(my_struct.rect, s.i);
    if (my_struct.seconds_size > 0.5)
        sfClock_restart(my_struct.timer_size);
    if (my_struct.seconds > 0.18) {
        sfClock_restart(my_struct.timer);
        sfRenderWindow_clear(my_struct.window, sfBlack);
        sfSprite_setTextureRect(my_struct.sprite_bird, my_struct.rect);
    }
    return my_struct;
}