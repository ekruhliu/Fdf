/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:13:43 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:13:43 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

double	ft_corner_cos(double x, double y)
{
	double	result;

	if ((x < 0 && y < 0) || (x > 0 && y > 0))
		result = cos(60 * (3.14 / 180));
	else
		result = cos(120 * (3.14 / 180));
	return (result);
}

double	ft_beta(double x, double y)
{
	double	result;

	if ((x > 0 && y > 0) || (x < 0 && y > 0))
		result = (7 * 3.1415) / 6;
	if ((x < 0 && y < 0) || (x > 0 && y < 0))
		result = 3.1415 / 6;
	return (result);
}

void	projection(t_matrix *matrix, int i)
{
	double	l;
	double	f;
	double	corner;
	double	beta;

	if (Y == 0)
		Y = 0.1;
	if (X == 0)
		X = 0.1;
	corner = ft_corner_cos(X, Y);
	beta = ft_beta(X, Y);
	l = sqrt((X * X) + (Y * Y) - 2 * fabs(X) * fabs(Y) * corner);
	if ((X > 0 && Y > 0) || (X < 0 && Y < 0))
		f = acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l)) + beta;
	else
		f = beta - acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l));
	matrix->coord[i].new_x = l * cos(f) + WIRINA / 2;
	matrix->coord[i].new_y = -l * sin(f) - Z + VISOTA / 2;
}
