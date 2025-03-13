/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:58:26 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/13 15:03:13 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*test[10];
	test[0] = "Pharse: ";
	test[1] = "Eu";
	test[2] = "tenho";
	test[3] = "que";
	test[4] = "enviar";
	test[5] = "para";
	test[6] = "a";
	test[7] = "molinette";
	test[8] = "me";
	test[9] = "Aprovar!!";	
	printf("%s\n", ft_strjoin(10, test, "-"));
	printf("Ja foi pior");
	return (0);
}

int ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (*str++)
		index++;
	return (index);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		index1;
	int		index2;
	int		index3;
	int		calc;

	index1 = 0;
	calc = (size - 1) + ft_strlen(sep);
	while (index1 < size)
	{
		calc = calc + ft_strlen(strs[index1]);
		index1++;
	}
	
	str = (char *)malloc(sizeof(char) * (calc + 1));
	index1 = 0;
	index3 = 0;
	while (index1 < size)
	{
		index2 = 0;
		while (strs[index1][index2] != '\0')
		{
			str[index3++] = strs[index1][index2++];
		}
		index2 = 0;
		while (sep[index2] != '\0' && index1 != (size - 1))
		{
			str[index3++] = sep[index2++];
		}
		index1++;
	}
	str[index3] = '\0';
	return (str);
}
