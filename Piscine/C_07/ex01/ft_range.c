/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:46:22 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 21:04:19 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);
int	ft_strlen(int *str);

int main(void)
{
	int min = -5;
	int max = 10;
	int size;
	int *res;
	int	index = 0;

	res = ft_range(min, max);
	size = max - min;
	while (size != 0)
	{
		printf("%d\n",res[index]);
		index++;
		size--;
	}
	free(res);
	return (0);
}

int *ft_range(int min, int max)
{
	int range;
	int *nbr;
	int *ptr;

	range = (max - (min)) + 1;
	nbr = (int *)malloc(sizeof(int) * (range));
	ptr = nbr;
	if(min >= max)
		return (NULL);
	while(range > 0)
	{
		*nbr = min;
		nbr++;
		range --;
		min++;
	}
	return (ptr);
}

int	ft_strlen(int *str)
{
	int	count;

	count = 0;
	while(str[count] == '\0')
		count++;
	return (count);
}
