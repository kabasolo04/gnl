/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kabasolo <kabasolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:50:46 by kabasolo          #+#    #+#             */
/*   Updated: 2024/02/01 18:32:54 by kabasolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <string.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

int	main(void)
{
	return (0);
}
/*Prueba de aver que mierda devuelve
	int	fd = open("1prueba.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);
	char	*str;
	
	str = "Hola";
	while (str[0] != '\0')
	{
		str = get_next_line(fd);
		printf("%s", str);
		printf("-----------\n");
	}
*/

/*Prueba de corta y pega
	char *str1 = (char *)malloc(sizeof(char) * 9);
    char str2[BUFFER_SIZE] = "Adioooooos\nAdioooooos\nAdios";

    strcpy(str1, "Holaaaaa");
    str1 = ft_join(str1, str2);
	ft_cut_buffer(str2);
	str1 = ft_join(str1, str2);
	ft_cut_buffer(str2);
	str1 = ft_join(str1, str2);
    printf("%s", str1);
*/

/*Prueba de join
    char *str1 = (char *)malloc(sizeof(char) * 9);
    char str2[BUFFER_SIZE] = "Adioooooos\nAdioooooos";

    strcpy(str1, "Holaaaaa");
    str1 = ft_join(str1, str2);
    printf("%s", str1);
*/

/*Prueba de corte
	int i;
	char str[100] = "blablabla\nblobloblo\nblublublu\nblebleble\nbliblibli";

	i = 0;
	while (str[0] != '\0')
	{
		printf("%sX\n--------\n", str);
		ft_cut_buffer(str);
		i ++;
	}
*/