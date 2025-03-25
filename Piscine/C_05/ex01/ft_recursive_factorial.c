/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:37:22 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/10 19:39:25 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);
int ft_conv_nbr(char *str);

int main(int argc, char **argv)
{
	if(argc != 2)
		return (0);
	printf("%s! = %d\n",argv[1] ,ft_recursive_factorial(ft_conv_nbr(argv[1])));
}
*/
int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = nb;
	if (nb == 0)
		return (1);
	else
		resultado = resultado * ft_recursive_factorial(nb - 1);
	return (resultado);
}

int	ft_conv_nbr(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result);
}
