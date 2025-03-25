/* ************************************************************************** */
/*      	                                                              */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:08:30 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/10 16:51:00 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str);

int	main(void)
{
	int	number;

	number = 5698;
	ft_putnbr(number);
}
*/

void	ft_putnbr(int nb)
{
	char	conversion[2];

	if (nb <= -2147483648 || nb >= 2147483647)
		return ;
	if (nb < 0)
	{
		ft_putstr("-");
		nb = (nb *(-1));
	}
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	conversion[0] = (nb % 10) + '0';
	conversion[1] = '\0';
	ft_putstr (conversion);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (STDOUT_FILENO, str, 1);
		str++;
	}
}
