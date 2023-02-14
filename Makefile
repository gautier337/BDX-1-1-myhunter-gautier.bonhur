##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compile
##

SRC	=	src/main.c \
		src/events/events.c \
		src/define/define_rect.c \
		src/define/define_texture.c \
		src/errors_handler.c \
		src/define/define_default_position.c \
		lib/my_putchar.c \
		lib/my_putstr.c \
		src/define/define_time.c \
		src/conditions/check_condition.c \
		lib/my_put_nbr.c \
		src/h.c

NAME = my_hunter

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC) -lcsfml-graphics -lcsfml-window -lcsfml-audio -lcsfml-system

clean:
	rm -f $(OBJ)
	rm -f a.out

fclean: clean
	rm -f $(NAME)

re: fclean all