/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_window.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:13:25 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:13:26 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	open_window(t_matrix *matrix)
{
	matrix->mlx = mlx_init();
	matrix->win = mlx_new_window(matrix->mlx, WIRINA, VISOTA, "Fdf");
}
