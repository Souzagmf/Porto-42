/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:19:06 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/13 15:52:01 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str);
void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-56);
	return (0);
}

void ft_putnbr(int nb)
{
	char nbr;

	nbr = '0';
	if(nb < 0)
	{
		if(nb == -2147483648)
		{
			write(STDOUT_FILENO, "-2147483648", 11);
		}
		write(STDOUT_FILENO, "-", 1);
		nb = -nb;
	}
	if(nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	nbr = (nb % 10) + '0';
	ft_putchar(nbr);  
}

void	ft_putchar(char str)
{
	write(STDOUT_FILENO, &str, 1);
}
