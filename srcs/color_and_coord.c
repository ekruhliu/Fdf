/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_and_coord.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:13:09 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:13:10 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	color_and_coord(t_matrix *matrix, char **coord, double mult)
{
	int			i;

	i = 0;
	matrix->coord = ft_memalloc(sizeof(t_coord) * SIZE_MAP);
	while (i <= SIZE_MAP)
	{
		RED = 255;
		GREEN = 255;
		BLUE = 255;
		i++;
	}
	find_coord(matrix, coord, mult);
}
