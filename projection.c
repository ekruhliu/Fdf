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

double	ft_angle_cos(double x, double y)
{
	double	res;

	if ((x < 0 && y < 0) || (x > 0 && y > 0))
		res = cos(60 * (3.14 / 180));
	else
		res = cos(120 * (3.14 / 180));
	return (res);
}

double	ft_beta(double x, double y)
{
	double	res;

	if ((x > 0 && y > 0) || (x < 0 && y > 0))
		res = (7 * 3.1415) / 6;
	if ((x < 0 && y < 0) || (x > 0 && y < 0))
		res = 3.1415 / 6;
	return (res);
}

void	projection(t_matrix *matrix, int i)
{
	double	l;
	double	f;
	double	angle;
	double	beta;

	if (Y == 0)
		Y = 0.1;
	if (X == 0)
		X = 0.1;
	angle = ft_angle_cos(X, Y);
	beta = ft_beta(X, Y);
	l = sqrt((X * X) + (Y * Y) - 2 * fabs(X) * fabs(Y) * angle);
	if ((X > 0 && Y > 0) || (X < 0 && Y < 0))
		f = acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l)) + beta;
	else
		f = beta - acos((Y * Y + l * l - X * X) / (2 * fabs(Y) * l));
	matrix->coord[i].new_x = l * cos(f) + WIRINA / 2;
	matrix->coord[i].new_y = -l * sin(f) - Z + VISOTA / 2;
}
