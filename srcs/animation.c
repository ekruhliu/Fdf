/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:17:46 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/24 20:17:46 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int	animation(t_matrix *matrix)
{
	int		i;
	double	x;
	double	y;

	i = 0;
	if (matrix->animation == 0)
	{
		find_center(matrix);
		while (i < SIZE_MAP)
		{
			x = X;
			y = Y;
			X = X * cos(1 * (3.14 / 180)) - Y * sin(1 * (3.14 / 180));
			Y = x * sin(1 * (3.14 / 180)) + y * cos(1 * (3.14 / 180));
			i++;
		}
		back_center(matrix);
		magik(matrix);
	}
	return (0);
}
