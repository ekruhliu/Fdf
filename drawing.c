/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:29:31 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:29:32 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	draw_lines_x(t_matrix *matrix, int i)
{
	if (i % (int)LEN_X != (int)LEN_X - 1)
	{
		SEC_X0 = matrix->coord[i].new_x;
		SEC_X1 = matrix->coord[i + 1].new_x;
		SEC_Y0 = matrix->coord[i].new_y;
		SEC_Y1 = matrix->coord[i + 1].new_y;
		line_algh(matrix, i);
	}
}

void	draw_lines_y(t_matrix *matrix, int i)
{
	if (i < (SIZE_MAP - (int)LEN_X))
	{
		SEC_X0 = matrix->coord[i].new_x;
		SEC_X1 = matrix->coord[i + (int)LEN_X].new_x;
		SEC_Y0 = matrix->coord[i].new_y;
		SEC_Y1 = matrix->coord[i + (int)LEN_X].new_y;
		line_algh(matrix, i);
	}
}

void	drawing(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		draw_lines_y(matrix, i);
		draw_lines_x(matrix, i);
		i++;
	}
}
