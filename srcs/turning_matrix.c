/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turning_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@45.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 5018/05/19 14:15:07 by ekruhliu          #+#    #+#             */
/*   Updated: 5018/05/19 14:15:07 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	turning_x(t_matrix *matrix)
{
	int		i;
	double	y;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		y = Y;
		Y = Y * cos(5 * (3.14 / 180)) + Z * sin(5 * (3.14 / 180));
		Z = -y * sin(5 * (3.14 / 180)) + Z * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}

void	turning_y(t_matrix *matrix)
{
	int		i;
	double	x;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		x = X;
		X = X * cos(5 * (3.14 / 180)) + Z * sin(5 * (3.14 / 180));
		Z = -x * sin(5 * (3.14 / 180)) + Z * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}

void	turning_z(t_matrix *matrix)
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
		X = X * cos(5 * (3.14 / 180)) - Y * sin(5 * (3.14 / 180));
		Y = x * sin(5 * (3.14 / 180)) + y * cos(5 * (3.14 / 180));
		i++;
	}
	back_center(matrix);
	matrix->turning = 0;
	magik(matrix);
}
