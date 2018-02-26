/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_turning_matrix.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:47:02 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 17:47:06 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	turning_x_rev(t_matrix *matrix)
{
	int		i;
	double	y;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		y = Y;
		Y = Y * cos(5 * (3.14 / 180)) - Z * sin(5 * (3.14 / 180));
		Z = y * sin(5 * (3.14 / 180)) + Z * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}

void	turning_y_rev(t_matrix *matrix)
{
	int		i;
	double	x;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		x = X;
		X = X * cos(5 * (3.14 / 180)) - Z * sin(5 * (3.14 / 180));
		Z = x * sin(5 * (3.14 / 180)) + Z * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}

void	turning_z_rev(t_matrix *matrix)
{
	int		i;
	double	x;
	double	y;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		x = X;
		y = Y;
		X = X * cos(5 * (3.14 / 180)) + Y * sin(5 * (3.14 / 180));
		Y = -x * sin(5 * (3.14 / 180)) + y * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}
