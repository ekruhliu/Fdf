/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:17:46 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/24 20:17:46 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	animation(t_matrix *matrix)
{
	if (matrix->animation == 0)
	{
		while (matrix->animation == 0)
			turning_z(matrix);
	}
}
