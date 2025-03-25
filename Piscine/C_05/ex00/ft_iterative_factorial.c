/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 05:45:34 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/10 19:34:59 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
*/
int	ft_iterative_factorial(int nb)
{
	int				result;
	unsigned int	index;

	index = 1;
	result = 1;
	if (nb == 0)
		return (1);
	while (index <= nb)
	{
		result = index * result;
		index++;
	}
	return (result);
}
