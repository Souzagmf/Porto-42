/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 21:05:18 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 00:03:29 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_is_prime(int nb);

int main(void)
{
	printf("%d\n", ft_is_prime(7));
	return (0);
}
*/
int	ft_is_prime(int nb)
{
	int	nbr;
	int	result;

	nbr = 1;
	while (nbr <= nb)
	{
		result = nb % nbr;
		if (result == 0)
		{
			if (nbr != 1 && nbr != nb)
			{
				return (0);
			}
		}
		nbr++;
	}
	return (1);
}
