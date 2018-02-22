/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diagonal_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:23:38 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 18:23:40 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	upper_left_corner(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X - 10;
		i++;
	}
	magik(matrix);
}

void	upper_right_corner(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		Y = Y - 10;
		i++;
	}
	magik(matrix);
}

void	lower_left_corner(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X + 10;
		i++;
	}
	magik(matrix);
}

void	lower_right_corner(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		Y = Y + 10;
		i++;
	}
	magik(matrix);
}
