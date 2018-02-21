/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:13:56 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:13:56 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void		create_lines(t_matrix *matrix, int i)
{
	int		x;

	if ((int)SEC_Y < VISOTA && (int)SEC_X < WIRINA)
	{
		x = (int)SEC_Y * matrix->img->size_line + (int)SEC_X * 4;
		if (x < VISOTA * WIRINA * 4)
		{
			matrix->img->line[x] = BLUE;
			matrix->img->line[x + 1] = GREEN;
			matrix->img->line[x + 2] = RED;
		}
	}
}
