/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_coordinate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:11:39 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:11:40 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char	**make_coordinate(char *argv)
{
	int		len;
	int		fd;
	char	*line;
	char	**mas;
	int		i;

	i = 0;
	line = read_file(argv);
	mas = ft_strsplit(line, ' ');
	while (mas[i])
		i++;
	free(line);
	return (mas);
}
