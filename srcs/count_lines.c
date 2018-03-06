/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:12:04 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:12:04 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	count_lines(char *argv, t_matrix *matrix)
{
	int fd;
	int lines;
	int check;

	lines = 0;
	fd = open(argv, O_RDONLY);
	while ((check = get_next_line(fd, &argv)) > 0)
	{
		lines++;
		free(argv);
	}
	free(argv);
	close(fd);
	LEN_Y = (double)lines;
	SIZE_MAP = (int)LEN_Y * (int)LEN_X;
}
