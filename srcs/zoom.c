/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:48:10 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 17:48:11 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	zoom_plus(t_matrix *matrix)
{
	int i;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		Z = Z * 1.1;
		X = X * 1.1;
		Y = Y * 1.1;
		i++;
	}
	back_center(matrix);
	magik(matrix);
}

void	zoom_minus(t_matrix *matrix)
{
	int i;

	i = 0;
	find_center(matrix);
	while (i < SIZE_MAP)
	{
		Z = Z * 0.9;
		X = X * 0.9;
		Y = Y * 0.9;
		i++;
	}
	back_center(matrix);
	magik(matrix);
}
