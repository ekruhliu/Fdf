/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_save_color.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:11:02 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:11:03 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void		find_and_save_color(int i, t_matrix *matrix, char *coordinate)
{
	int		j;
	int		color;
	int		red;
	int		green;
	int		blue;

	j = 0;
	if (coordinate[j] == '0' && coordinate[j + 1] == 'x')
		j = j + 2;
	color = ft_atoi_hex(&coordinate[j]);
	red = (color >> 16);
	green = (color >> 8) - (red << 8);
	blue = (color) - (red << 16) - (green << 8);
	RED = red;
	GREEN = green;
	BLUE = blue;
}
