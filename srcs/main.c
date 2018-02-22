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

static void	part_2(t_matrix *matrix, char **coordinate, double mult)
{
	color_and_coord(matrix, coordinate, mult);
	open_window(matrix);
	magik(matrix);
	mlx_hook(matrix->win, 2, 5, klavochka, matrix);
	mlx_hook(matrix->win, 17, 1L << 17, exit_x, 0);
	mlx_loop(matrix->mlx);
}

static void	part_1(char *argv, t_matrix *matrix)
{
	double		mult;
	char		**coordinate;

	mult = 0;
	coordinate = make_coordinate(argv);
	count_lines(argv, matrix);
	count_chars(argv, matrix);
	matrix->coord_2 = ft_memalloc(sizeof(t_coord_2) * SIZE_MAP + 1);
	mult = (VISOTA - 350) / ((LEN_X > LEN_Y) ? LEN_X : LEN_Y);
	part_2(matrix, coordinate, mult);
}

static void	part_3(t_matrix *matrix)
{
	free(matrix->coord);
	free(matrix->coord_2);
	free(matrix->img);
	free(matrix);
}

int			main(int argc, char **argv)
{
	if (argc == 1)
		usage();
	if (argc == 2)
	{
		if (error_format(argv[1]) != 0)
			exit(1);
		t_matrix	*matrix;
		matrix = ft_memalloc(sizeof(t_matrix));
		part_1(argv[1], matrix);
		part_3(matrix);
	}
	if (argc > 2)
		too_many_arg();
	return (0);
}
