/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:39:28 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/01 15:27:44 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(const char *s);
int		ft_find_jump(char *rem);
void	ft_cut_buffer(char *buffer);
char	*ft_join(char *remaining, char *readed);
void	ft_bzero(void *s, size_t n);
char	*get_next_line(int fd);

#endif //GET_NEXT_LINE_H