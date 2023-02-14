/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my_hunter
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdlib.h>
    #include <SFML/Graphics.h>
    #include "time.h"

typedef struct struct_params {

    sfVideoMode mode;
    sfRenderWindow *window;
    sfTexture *texture;
    sfTexture *texture_two;
    sfTexture *texture_three;
    sfTexture *texture_bird;
    sfSprite *sprite;
    sfSprite *sprite_bird;
    sfIntRect rect;

    sfClock *timer_size;
    sfClock *timer;
    sfTime time;
    sfTime time_size;

    float seconds;
    float seconds_size;
} struct_params_t;

typedef struct duck_settings_pos {

    int i;
    float x;
    float y;
    float w;
    int count;
    int speed;
    int score;

} duck_settings_pos_t;

struct_params_t define(void);
int check_errors(struct_params_t my_struct);
sfIntRect define_rect(sfIntRect rect, int left);
duck_settings_pos_t button_and_clic(sfRenderWindow *w, duck_settings_pos_t sd);

duck_settings_pos_t define_default_position(duck_settings_pos_t struct_duck);
struct_params_t set_time(struct_params_t my_struct);
struct_params_t set_counter(duck_settings_pos_t s, struct_params_t my_struct);
duck_settings_pos_t setstruct_duck(duck_settings_pos_t sd, struct_params_t ms);

void helper(void);

void my_putstr (char const *str);
int my_put_nbr(int nb);

#endif
