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

#include "head.h"

int		main(int argc, char **argv)
{
	t_matrix	*matrix;
	double		mult;
	char		**coordinate;

	mult = 0;
	if (argc == 2)
	{
		coordinate = make_coordinate(argv[1]);
		matrix = ft_memalloc(sizeof(t_matrix));
		count_lines(argv[1], matrix);
		count_chars(argv[1], matrix);
		matrix->coord_2 = ft_memalloc(sizeof(t_coord_2) * SIZE_MAP + 1);
		mult = (VISOTA - 350) / ((LEN_X > LEN_Y) ? LEN_X : LEN_Y);
		color_and_coord(matrix, coordinate, mult);
		open_window(matrix);
		magik(matrix);
		mlx_hook(matrix->win, 2, 5, klavochka, matrix);
		mlx_hook(matrix->win, 17, 1L << 17, exit_x, 0);
		mlx_loop(matrix->mlx);
	}
	free(matrix->coord);
	free(matrix->coord_2);
	free(matrix->img);
	free(matrix);
	return (0);
}
