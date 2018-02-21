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

NAME = Fdf

FLAGS = -c -Wall -Wextra -Werror

MLX = -lmlx -framework OpenGL -framework AppKit

HEADER = head.h

SRCS = ./srcs/color_and_coord.c ./srcs/count_chars.c ./srcs/count_lines.c ./srcs/create_image.c \
./srcs/create_lines.c ./srcs/diagonal_move.c ./srcs/drawing.c ./srcs/exit_x.c ./srcs/find_and_save_color.c \
./srcs/find_coord.c ./srcs/ft_atoi_hex.c ./srcs/growth.c ./srcs/klavochka.c ./srcs/line_algh.c ./srcs/magik.c \
./srcs/make_coordinate.c ./srcs/move.c ./srcs/open_window.c ./srcs/projection.c ./srcs/read_file.c ./srcs/zoom.c \
./srcs/turning_matrix.c ./srcs/reverse_turning_matrix.c ./srcs/main.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
		@ make -C libft/
		@ gcc -o $(NAME) $(FLAGS) $(OBJ) libft/libft.a $(MLX)

