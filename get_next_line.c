/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:35:45 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/02 13:33:28 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			rbytes;

	rbytes = 1;
	line = (char *)malloc(sizeof(char) * 1);
	if (!line || fd < 0 || BUFFER_SIZE <= 0)
		return (free(line), NULL);
	line[0] = '\0';
	line = ft_join(line, buffer);
	while (ft_lfc(line, '\n') < 0 && rbytes > 0)
	{
		rbytes = read(fd, buffer, BUFFER_SIZE);
		if (rbytes == -1)
			return (free(line), ft_bzero(buffer, ft_lfc(buffer, '\0')), NULL);
		buffer[rbytes] = '\0';
		line = ft_join(line, buffer);
	}
	if (line[0] == '\0')
		return (free(line), NULL);
	return (ft_cut_buffer(buffer), line);
}
