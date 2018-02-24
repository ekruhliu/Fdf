/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 13:19:48 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/22 13:19:49 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	help(t_matrix *matrix)
{
	if (matrix->help == 0)
	{
		mlx_string_put(matrix->mlx, matrix->win, 10, 10, 0xFF0000, UP);
		mlx_string_put(matrix->mlx, matrix->win, 10, 40, 0xFF0000, DOWN);
		mlx_string_put(matrix->mlx, matrix->win, 10, 70, 0xFF0000, LEFT);
		mlx_string_put(matrix->mlx, matrix->win, 10, 100, 0xFF0000, RIGHT);
		mlx_string_put(matrix->mlx, matrix->win, 10, 130, 0xFF0000, DI_UP);
		mlx_string_put(matrix->mlx, matrix->win, 10, 160, 0xFF0000, DI_DOWN);
		mlx_string_put(matrix->mlx, matrix->win, 10, 190, 0xFF0000, GROWTH);
		mlx_string_put(matrix->mlx, matrix->win, 10, 220, 0xFF0000, ZOOM);
		mlx_string_put(matrix->mlx, matrix->win, 10, 250, 0xFF0000, TURN_X);
		mlx_string_put(matrix->mlx, matrix->win, 10, 280, 0xFF0000, TURN_Y);
		mlx_string_put(matrix->mlx, matrix->win, 10, 310, 0xFF0000, TURN_Z);
	}
}
