/*
** EPITECH PROJECT, 2021
** main
** File description:
** my_hunter
*/

#include "../includes/my.h"

void displaysprite (struct_params_t my_struct, duck_settings_pos_t struct_duck)
{
    sfVector2f my_pos = {struct_duck.x, struct_duck.y};
    sfVector2f my_scale = {struct_duck.w, 0.25};

    sfSprite_setPosition(my_struct.sprite_bird, my_pos);
    sfSprite_setScale(my_struct.sprite_bird, my_scale);

    sfRenderWindow_drawSprite(my_struct.window, my_struct.sprite, NULL);
    sfRenderWindow_drawSprite(my_struct.window, my_struct.sprite_bird, NULL);
    sfRenderWindow_display(my_struct.window);
}

void my_hunter(struct_params_t my_struct, duck_settings_pos_t struct_duck)
{
    sfSprite_setTexture(my_struct.sprite, my_struct.texture, sfTrue);
    sfSprite_setTexture(my_struct.sprite_bird, my_struct.texture_bird, sfTrue);
    sfRenderWindow_setFramerateLimit(my_struct.window, 120);
    sfEvent event;

    while (sfRenderWindow_isOpen(my_struct.window) && struct_duck.count != 3) {
        my_struct = set_time(my_struct);
        my_struct = set_counter(struct_duck, my_struct);
        struct_duck = setstruct_duck(struct_duck, my_struct);
        displaysprite(my_struct, struct_duck);
    }
    if (struct_duck.count == 3) {
        for (int i = 0; i < 5; i++) {
            my_putstr("He managed to cross after killing him ");
            my_put_nbr(struct_duck.score);
            my_putstr(" times. You can do better !\n\n\n");
        }
    }
    sfRenderWindow_destroy(my_struct.window);
}

int main(int argc, char **argv)
{
    struct_params_t my_struct;
    duck_settings_pos_t struct_duck;

    if (argc > 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        helper();
        return 0;
    }
    my_struct = define();
    struct_duck = define_default_position(struct_duck);

    if (check_errors(my_struct) == 84)
        return 84;
    my_hunter(my_struct, struct_duck);
    return 0;
}