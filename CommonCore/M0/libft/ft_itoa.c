/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/05/17 14:54:27 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Take the size of number by decimal case
static int	ft_numlen(int n)
{
	int		len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_putnbr(char *c, int n, int *fd)
{
	if (n <= -2147483648)
	{
		c[*fd] = '-';
		(*fd)++;
		c[*fd] = '2';
		(*fd)++;
		n = 147483648;
	}
	if (n < 0)
	{
		c[*fd] = '-';
		(*fd)++;
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(c, n / 10, fd);
	}
	c[*fd] = (n % 10) + 48;
	(*fd)++;
}

// Convert int to char
char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = 0;
	str = (char *)malloc(sizeof(char) * ft_numlen(n) + 1);
	if (str == NULL)
		return (NULL);
	ft_putnbr(str, n, &len);
	str[len] = '\0';
	return (str);
}
