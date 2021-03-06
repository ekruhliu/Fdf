/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   klavochka.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:14:53 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:14:54 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		part_one(int key, t_matrix *matrix)
{
	if (key == 53)
		exit_x();
	if (key == 69 || key == 78)
		(key == 69 ? zoom_plus(matrix) : zoom_minus(matrix));
	if ((key == 116 || key == 121) && matrix->turning == 1)
		(key == 116 ? growth_up(matrix) : growth_down(matrix));
	if ((key == 126 || key == 13) || (key == 125 || key == 7))
		(key == 126 || key == 13) ? up(matrix) : down(matrix);
	if ((key == 123 || key == 0) || (key == 124 || key == 2))
		(key == 123 || key == 0) ? left(matrix) : right(matrix);
	if (key == 1)
	{
		matrix->animation = (matrix->animation == 0 ? 1 : 0);
		magik(matrix);
	}
}

static	void	part_two(int key, t_matrix *matrix)
{
	if (key == 12 || key == 8)
		(key == 12 ? upper_left_corner(matrix) : lower_left_corner(matrix));
	if (key == 14 || key == 6)
		(key == 14 ? upper_right_corner(matrix) : lower_right_corner(matrix));
	if (key == 83 || key == 86)
		(key == 83 ? turning_x(matrix) : turning_x_rev(matrix));
	if (key == 84 || key == 87)
		(key == 84 ? turning_y(matrix) : turning_y_rev(matrix));
	if (key == 85 || key == 88)
		(key == 85 ? turning_z(matrix) : turning_z_rev(matrix));
	if (key == 4)
	{
		matrix->help = (matrix->help == 0 ? 1 : 0);
		magik(matrix);
	}
}

int				klavochka(int key, t_matrix *matrix)
{
	part_one(key, matrix);
	part_two(key, matrix);
	return (0);
}
