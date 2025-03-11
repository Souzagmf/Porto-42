/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 00:05:16 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 13:55:01 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
int ft_find_next_prime(int nb);
int ft_is_prime(int nb);

int main(void)
{
    printf("%d\n", ft_find_next_prime(14));
    return (0);
}
*/

int	ft_find_next_prime(int nb)
{
	int	prime;

	prime = ft_is_prime(nb);
	if (prime == 1)
	{
		printf("Is prime: %d\n", nb);
		return (0);
	}
	if (prime == 0)
		prime = ft_find_next_prime(nb + 1);
	return (0);
}

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
