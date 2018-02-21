/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:10:49 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:10:50 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int				ft_atoi_hex(char *coordinate)
{
	int		i;
	int		res;

	res = 0;
	i = 0;
	while (coordinate[i])
	{
		if (coordinate[i] >= 'a' && coordinate[i] <= 'f')
			coordinate[i] = coordinate[i] - 32;
		i++;
	}
	i = 0;
	while (coordinate[i])
	{
		if (coordinate[i] >= '0' && coordinate[i] <= '9')
			res = res * 16 + (coordinate[i] - 48);
		else if (coordinate[i] >= 'A' && coordinate[i] <= 'F')
			res = res * 16 + (coordinate[i] - 55);
		i++;
	}
	return (res);
}
