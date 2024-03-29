/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:39:28 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/02 15:10:12 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

int		ft_lfc(char *str, char c); // lfc -> Lenght For Char
void	ft_cut_buffer(char *buffer);
char	*ft_join(char *remaining, char *readed);
void	ft_bzero(void *s, size_t n);
char	*get_next_line(int fd);

#endif //GET_NEXT_LINE_H