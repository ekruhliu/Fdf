/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_center.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:37:19 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/26 15:37:20 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	find_center(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X - LEN_X / 2;
		Y = Y - LEN_Y / 2;
		i++;
	}
}

void	back_center(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		X = X + LEN_X / 2;
		Y = Y + LEN_Y / 2;
		i++;
	}
}
