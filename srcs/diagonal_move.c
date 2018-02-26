/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   diagonal_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:23:38 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 18:23:40 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	upper_left_corner(t_matrix *matrix)
{
	MOVE_X -= 10;
	MOVE_Y -= 10;
	magik(matrix);
}

void	upper_right_corner(t_matrix *matrix)
{
	MOVE_X += 10;
	MOVE_Y -= 10;
	magik(matrix);
}

void	lower_left_corner(t_matrix *matrix)
{
	MOVE_X += 10;
	MOVE_Y += 10;
	magik(matrix);
}

void	lower_right_corner(t_matrix *matrix)
{
	MOVE_X -= 10;
	MOVE_Y += 10;
	magik(matrix);
}
