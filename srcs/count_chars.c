/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_chars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:12:18 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:12:19 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

char		**count_chars(char *argv, t_matrix *matrix)
{
	int		chars;
	int		check;
	char	**tab;
	int		fd;

	chars = 0;
	fd = open(argv, O_RDONLY);
	if (get_next_line(fd, &argv) <= 0)
		error_file();
	free(argv);
	tab = ft_strsplit(argv, ' ');
	while (tab[chars])
		chars++;
	while ((check = get_next_line(fd, &argv)) > 0)
		free(argv);
	free(argv);
	close(fd);
	LEN_X = (double)chars;
	return (tab);
}
