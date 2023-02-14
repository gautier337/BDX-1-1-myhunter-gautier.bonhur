/*
** EPITECH PROJECT, 2021
** define_rect struct
** File description:
** my_hunter
*/

#include "../../includes/my.h"

sfIntRect define_rect(sfIntRect rect, int left)
{
    rect.left = left;
    rect.height = 1200;
    rect.width = 1000;
    rect.top = 0;

    return rect;
}