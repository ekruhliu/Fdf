/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_image.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:11:52 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:11:53 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	create_image(t_matrix *matrix)
{
	matrix->img = ft_memalloc(sizeof(t_img));
	matrix->img->bits = 0;
	matrix->img->size_line = 0;
	matrix->img->end = 0;
	matrix->img->image = mlx_new_image(matrix->mlx, WIRINA, VISOTA);
	matrix->img->line = mlx_get_data_addr(DATA_ADDR_1, DATA_ADDR_2);
}
