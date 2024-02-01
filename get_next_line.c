/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 19:35:45 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/01 18:40:57 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;
	int			rbytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rbytes = 1;
	line = (char *)malloc(sizeof(char) * 1);
	line[0] = '\0';
	line = ft_join(line, buffer);
	while (ft_find_jump(line) < 0 && rbytes > 0)
	{
		rbytes = read(fd, buffer, BUFFER_SIZE);
		if (rbytes == -1)
			return (free(line), ft_bzero(buffer, ft_strlen(buffer)), NULL);
		buffer[rbytes] = '\0';
		line = ft_join(line, buffer);
	}
	if (line[0] == '\0')
		return (free(line), NULL);
	ft_cut_buffer(buffer);
	return (line);
}
