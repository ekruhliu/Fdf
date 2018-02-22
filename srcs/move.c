/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:14:47 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 18:14:47 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	up(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X - 10;
		Y = Y - 10;
		i++;
	}
	magik(matrix);
}

void	down(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X + 10;
		Y = Y + 10;
		i++;
	}
	magik(matrix);
}

void	left(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X - 10;
		Y = Y + 10;
		i++;
	}
	magik(matrix);
}

void	right(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X + 10;
		Y = Y - 10;
		i++;
	}
	magik(matrix);
}
