# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/21 18:32:21 by ekruhliu          #+#    #+#              #
#    Updated: 2018/02/21 18:32:22 by ekruhliu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAGS = -c -Wall -Wextra -Werror

MLX = -lmlx -framework OpenGL -framework AppKit

HEADER = head.h

SRCS = ./srcs/color_and_coord.c ./srcs/count_chars.c ./srcs/count_lines.c ./srcs/create_image.c \
./srcs/create_lines.c ./srcs/diagonal_move.c ./srcs/drawing.c ./srcs/exit_x.c ./srcs/find_and_save_color.c \
./srcs/find_coord.c ./srcs/ft_atoi_hex.c ./srcs/growth.c ./srcs/klavochka.c ./srcs/line_algh.c ./srcs/magik.c \
./srcs/make_coordinate.c ./srcs/move.c ./srcs/open_window.c ./srcs/new_coord.c ./srcs/read_file.c ./srcs/zoom.c \
./srcs/turning_matrix.c ./srcs/reverse_turning_matrix.c ./srcs/usage.c ./srcs/errors.c ./srcs/help.c ./srcs/animation.c \
./srcs/find_center.c ./srcs/main.c

OBJ = color_and_coord.o count_chars.o count_lines.o create_image.o \
create_lines.o diagonal_move.o drawing.o exit_x.o find_and_save_color.o \
find_coord.o ft_atoi_hex.o growth.o klavochka.o line_algh.o magik.o \
make_coordinate.o move.o open_window.o new_coord.o read_file.o zoom.o \
turning_matrix.o reverse_turning_matrix.o usage.o errors.o help.o animation.o \
find_center.o main.o

all: $(NAME)

$(NAME):
		@ make -C libft/
		@ gcc $(FLAGS) $(HEADER) $(SRCS)
		@ gcc -o $(NAME) $(OBJ) libft/libft.a $(MLX)
		@afplay 1.mp3

clean:
		@ /bin/rm -f $(OBJ)
		@ make -C libft/ clean

fclean: clean
		@ /bin/rm -f $(NAME) ./head.h.gch
		@ make -C libft/ fclean

re: fclean all
