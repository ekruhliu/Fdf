/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_algh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:14:14 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:14:15 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void			line_algh(t_matrix *matrix, int i)
{
	SEC_X = SEC_X0;
	SEC_Y = SEC_Y0;
	while (fabs(SEC_Y - SEC_Y1) > 0.9)
	{
		create_lines(matrix, i);
		SEC_X += (SEC_X1 - SEC_X0) / fabs(SEC_Y1 - SEC_Y0);
		SEC_Y += (SEC_Y1 > SEC_Y0) ? 1 : -1;
	}
	SEC_X = SEC_X0;
	SEC_Y = SEC_Y0;
	while (fabs(matrix->coord_2->x - SEC_X1) > 0.9)
	{
		create_lines(matrix, i);
		SEC_Y += (SEC_Y1 - SEC_Y0) / fabs(SEC_X1 - SEC_X0);
		SEC_X += (SEC_X1 > SEC_X0) ? 1 : -1;
	}
	create_lines(matrix, i);
}
