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
	MOVE_Y -= 10;
	magik(matrix);
}

void	down(t_matrix *matrix)
{
	MOVE_Y += 10;
	magik(matrix);
}

void	left(t_matrix *matrix)
{
	MOVE_X -= 10;
	magik(matrix);
}

void	right(t_matrix *matrix)
{
	MOVE_X += 10;
	magik(matrix);
}
