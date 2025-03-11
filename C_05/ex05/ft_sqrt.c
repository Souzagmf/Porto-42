/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 20:38:40 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/10 21:08:04 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_sqrt(int nb);

int main(void)
{
	int nb;

	nb = 16;
	printf("%d\n", ft_sqrt(nb));
	return (0);
}
*/

int	ft_sqrt(int nb)
{
	int	index;
	int	result;

	index = 0;
	result = 0;
	while (result <= nb)
	{
		result = index * index;
		if (result == nb)
			return (index);
		index++;
	}
	return (0);
}
