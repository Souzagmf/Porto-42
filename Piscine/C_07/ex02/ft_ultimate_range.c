/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:09:18 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/13 13:54:22 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
	int min = 5;
	int max = 10;
	int *range;
	int result;
	int	index;

	index = 0;
	result = ft_ultimate_range(&range, min, max);
	printf("%d\n", result);
	while(result >= 0)
	{
		printf("R: %d | ", range[index]);
		index++;
		result--;
	}
	printf("Range:%d\n",(int )sizeof(result));	
	free(range);
}

int ft_ultimate_range(int **range, int min, int max)
{
	int *nbr_list;
	int calc;
	int *ptr;
	int minimum;

	minimum = min;
	if(min >= max)
	{
		*range = NULL;
		return (0);
	}
	calc = (max - (min));
	nbr_list = (int *)malloc(sizeof(int) * (max - min));
	ptr = nbr_list;
	if(!nbr_list)
		return (-1);
	while(calc > 0)
	{
		if(minimum == max)
			break ;
		*nbr_list = minimum;
		minimum++;
		nbr_list++;
		calc--;
	}
	*range = ptr;
	return (max - min);
}
