/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   magik.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 18:54:01 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/21 18:54:02 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	magik(t_matrix *matrix)
{
	int i;

	i = 0;
	while (i < SIZE_MAP)
	{
		new_coord(matrix, i);
		i++;
	}
	create_image(matrix);
	drawing(matrix);
	mlx_put_image_to_window(matrix->mlx, matrix->win, matrix->img->image, 0, 0);
	if (matrix->animation == 0)
		mlx_loop_hook(matrix->mlx, animation, matrix);
	help(matrix);
	free(matrix->img);
}
