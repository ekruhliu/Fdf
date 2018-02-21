/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixel_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:14:14 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:14:15 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void			pixel_line(t_matrix *matrix, int i)
{
	SEC_X = SEC_X0;
	SEC_Y = SEC_Y0;
	while (fabs(SEC_Y - SEC_Y1) > 0.9)
	{
		ft_fill_line(matrix, i);
		SEC_X += (SEC_X1 - SEC_X0) / fabs(SEC_Y1 - SEC_Y0);
		SEC_Y += (SEC_Y1 > SEC_Y0) ? 1 : -1;
	}
	SEC_X = SEC_X0;
	SEC_Y = SEC_Y0;
	while (fabs(matrix->coord_2->x - SEC_X1) > 0.9)
	{
		ft_fill_line(matrix, i);
		SEC_Y += (SEC_Y1 - SEC_Y0) / fabs(SEC_X1 - SEC_X0);
		SEC_X += (SEC_X1 > SEC_X0) ? 1 : -1;
	}
	ft_fill_line(matrix, i);
}
