/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:48:12 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 20:49:21 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src);
int	ft_strlen(char *str);
/*
int main (int argc, char **argv)
{
	char *dup;	
	dup = ft_strdup("Let's go barbie, let's go party!\n");
	write(STDOUT_FILENO, dup, ft_strlen(dup));
	//Liberar a memoria usando free
	free(dup);
}
*/

char	*ft_strdup(char *src)
{
	char	*duplicate;
	char	*ptr;
	int		size_src;

	size_src = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(char) * size_src);
	ptr = duplicate;
	while (*src)
	{
		*duplicate = *src;
		duplicate++;
		src++;
	}
	return (ptr);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
