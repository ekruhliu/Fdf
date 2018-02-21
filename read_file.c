/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 01:11:10 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/02/16 01:11:11 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

char		*read_file(char *argv)
{
	char	**mas;
	char	*res;
	char	*tmp;
	int		read_res;
	int		fd;

	fd = open(argv, O_RDONLY);
	res = ft_strdup("\0");
	while ((read_res = get_next_line(fd, &argv)) > 0)
	{
		mas = ft_strsplit(argv, ' ');
		tmp = ft_strdup(res);
		free(res);
		res = ft_strjoin(tmp, " ");
		free(tmp);
		tmp = ft_strdup(res);
		free(res);
		res = ft_strjoin(tmp, argv);
		free(argv);
	}
	close(fd);
	return (res);
}
