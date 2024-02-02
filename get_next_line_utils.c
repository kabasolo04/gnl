/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:12:05 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/02 13:37:00 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_lfc(char *str, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[l] != '\0')
		l ++;
	while (i <= l)
	{
		if (str[i] == (unsigned char)c)
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

	if (!buffer)
		return (line);
	s = malloc((ft_lfc(line, '\0') + ft_lfc(buffer, '\0') + 1) * sizeof(char));
	if (!s)
		return (NULL);
	i = 0;
	while (line[i] != '\0')
	{
		s[i] = line[i];
		i ++;
	}
	j = 0;
	while (buffer[j - 1] != '\n' && buffer[j] != '\0')
	{
		s[i + j] = buffer[j];
		j ++;
	}
	s[i + j] = '\0';
	free(line);
	return (s);
}

void	ft_cut_buffer(char *buffer)
{
	int	i;
	int	t;

	i = 0;
	t = ft_lfc(buffer, '\n');
	while (buffer[i + t] != '\0')
	{
		buffer[i] = buffer[i + t + 1];
		i ++;
	}
	while (i <= BUFFER_SIZE)
		buffer[i ++] = '\0';
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)s)[i ++] = 0;
}
