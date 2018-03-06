/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 12:31:30 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/22 12:31:31 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	too_many_arg(void)
{
	ft_putstr("ERROR: Too many arguments!\n");
}

int		error_format(char *argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (argv[i])
		i++;
	i = i - 4;
	if (argv[i + 3] == 102)
		j++;
	if (argv[i + 2] == 100)
		j++;
	if (argv[i + 1] == 102)
		j++;
	if (argv[i] == 46)
		j++;
	if (j == 4)
		return (0);
	else
	{
		ft_putstr("ERROR: Invalid file format!\n");
		return (1);
	}
}

void	error_file(void)
{
	ft_putstr("ERROR: Invalid file!\n");
	exit(1);
}
