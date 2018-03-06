/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/06 14:54:27 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/06 14:54:28 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		part_2(t_matrix *matrix, double mult)
{
	int i;

	i = 0;
	color_and_coord(matrix, mult);
	open_window(matrix);
	magik(matrix);
	mlx_hook(matrix->win, 2, 5, klavochka, matrix);
	mlx_hook(matrix->win, 17, 1L << 17, exit_x, 0);
	mlx_loop(matrix->mlx);
}

static void		part_1(char *argv, t_matrix *matrix)
{
	double		mult;

	MOVE_X = 0;
	MOVE_Y = 0;
	MOVE_Z = 0;
	mult = 0;
	matrix->help = 1;
	matrix->animation = 1;
	matrix->turning = 1;
	matrix->rubish = count_chars(argv, matrix);
	count_lines(argv, matrix);
	matrix->coordinate = make_coordinate(argv);
	matrix->coord_2 = ft_memalloc(sizeof(t_coord_2) * SIZE_MAP);
	mult = (VISOTA - 600) / ((LEN_X > LEN_Y) ? LEN_X : LEN_Y);
	part_2(matrix, mult);
}

static void		part_3(t_matrix *matrix)
{
	free(matrix->coord);
	free(matrix->coord_2);
	free(matrix->img);
	free(matrix->coordinate);
	free(matrix->rubish);
	free(matrix);
}

int				main(int argc, char **argv)
{
	t_matrix	*matrix;

	if (argc == 1)
		usage();
	if (argc == 2)
	{
		if (error_format(argv[1]) != 0)
			exit(1);
		matrix = ft_memalloc(sizeof(t_matrix));
		part_1(argv[1], matrix);
		part_3(matrix);
	}
	if (argc > 2)
		too_many_arg();
	return (0);
}
