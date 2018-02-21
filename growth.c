/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   growth.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:54:34 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 17:54:36 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void	growth_up(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		Z = Z * 1.1;
		projection(matrix, i);
		i++;
	}
	op(matrix);
}

void	griwth_down(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		Z = Z * 0.9;
		projection(matrix, i);
		i++;
	}
	op(matrix);	
}