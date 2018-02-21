/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   klavochka.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:14:53 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:14:54 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int	klavochka(int keycode, t_matrix *matrix)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 69 || keycode == 78)
		(keycode == 69 ? zoom_plus(matrix) : zoom_minus(matrix));
	// 	zoom_plus(matrix)
	// if (keycode == 78)
	// 	zoom_minus(matrix);
	if (keycode == 116)
		growth_up(matrix);
	if (keycode == 121)
		growth_down(matrix);
	if (keycode == 126 || keycode == 13)
		up(matrix);
	if (keycode == 125 || keycode == 7)
		down(matrix);
	if (keycode == 123 || keycode == 0)
		left(matrix);
	if (keycode == 124 || keycode == 2)
		right(matrix);
	if (keycode == 12)
		upper_left_corner(matrix);
	if (keycode == 8)
		lower_left_corner(matrix);
	if (keycode == 14)
		upper_right_corner(matrix);
	if (keycode == 6)
		lower_right_corner(matrix);
	if (keycode == 83)
		turning_x(matrix);
	if (keycode == 84)
		turning_y(matrix);
	if (keycode == 85)
		turning_z(matrix);
	if (keycode == 86)
		turning_x_rev(matrix);
	if (keycode == 87)
		turning_y_rev(matrix);
	if (keycode == 88)
		turning_z_rev(matrix);
	return (0);
}
