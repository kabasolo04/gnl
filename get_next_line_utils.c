/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_rem_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:12:05 by kabasolo          #+#    #+#             */
/*   Updated: 2024/01/22 10:59:06 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i ++;
	return (i);
}

int	ft_find_jump(char *rem)
{
	int	i;

	i = 0;
	while (rem[i] != '\0')
	{
		if (rem[i] == '\n')
			return (i);
		i ++;
	}
	return (-1);
}

char	*ft_join(char *line, char *buffer)
{
	char	*s;
	size_t	i;
	size_t	j;

	if (!buffer || buffer[0] == '\0')
		return (line);
	s = malloc((ft_strlen(line) + ft_strlen(buffer) + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (line[i] != '\0')
	{
		s[i] = line[i];
		i ++;
	}
	j = 0;
	while (buffer[j - 1] != '\n' && j < ft_strlen(buffer))
	{
		s[i + j] = buffer[j];
		j ++;
	}
	s[i + j] = '\0';
	free(line);
	return (s);
}

void	ft_cut_buffer(char *rem)
{
	int	i;
	int	t;

	i = 0;
	t = ft_find_jump(rem);
	while (rem[i + t] != '\0')
	{
		rem[i] = rem[i + t + 1];
		i ++;
	}
	while (i <= BUFFER_SIZE)
	{
		rem[i] = '\0';
		i ++;
	}
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i ++;
	}
}
