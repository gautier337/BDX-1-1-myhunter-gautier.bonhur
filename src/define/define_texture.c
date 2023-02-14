/*
** EPITECH PROJECT, 2021
** my_hunter
** File description:
** define_texture
*/

#include "../../includes/my.h"

struct_params_t define(void)
{
    struct_params_t my_struct;

    sfVideoMode mode = {1920, 1080, 32};
    my_struct.mode = mode;
    my_struct.timer_size = sfClock_create();
    my_struct.timer = sfClock_create();
    my_struct.sprite = sfSprite_create();
    my_struct.sprite_bird = sfSprite_create();
    my_struct.texture = sfTexture_createFromFile("0.jpg", NULL);
    my_struct.texture_three = sfTexture_createFromFile("2.jpg", NULL);
    my_struct.texture_bird = sfTexture_createFromFile("sprite.png", NULL);
    my_struct.texture_two = sfTexture_createFromFile("1.png", NULL);
    my_struct.window = sfRenderWindow_create(my_struct.mode, "Kill My Bird",
    sfResize | sfClose, NULL);

    return my_struct;
}
