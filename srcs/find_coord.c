/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:13:04 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:13:05 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	find_coord(t_matrix *matrix, double mult)
{
	int		i;
	int		j;
	double	x;
	double	y;

	i = 0;
	x = 0;
	y = 0;
	while (matrix->coordinate[i] && i < SIZE_MAP)
	{
		if (x == LEN_X)
			y++;
		if (x == LEN_X)
			x = 0;
		j = 0;
		Z = ((double)ft_atoi(&matrix->coordinate[i][j])) * (mult / 2);
		Y = (y - LEN_Y / 2) * mult;
		X = (x - LEN_X / 2) * mult;
		while ((ft_isdigit(matrix->coordinate[i][j])) == 1)
			j++;
		if (matrix->coordinate[i][j] == ',')
			find_and_save_color(i, matrix, &matrix->coordinate[i][++j]);
		i++;
		x++;
	}
}
