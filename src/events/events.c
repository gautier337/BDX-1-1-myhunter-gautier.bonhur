/*
** EPITECH PROJECT, 2021
** Events
** File description:
** my_hunter
*/

#include "../../includes/my.h"

duck_settings_pos_t button_and_clic(sfRenderWindow *w, duck_settings_pos_t sd)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(w, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(w);
        if (event.type == sfEvtMouseButtonPressed) {
            if (event.mouseButton.x - sd.x < 300 &&
                event.mouseButton.x - sd.x > -20 &&
                event.mouseButton.y - sd.y > 20 &&
                event.mouseButton.y - sd.y < 250) {
                sd.x = 2000.0;
                sd.y = rand() % 800 + 0;
                sd.speed = sd.speed + 1.5;
                sd.score = sd.score + 1;
                return sd;
            }
        }
    }
    return sd;
}