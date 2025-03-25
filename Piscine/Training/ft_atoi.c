/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:52:39 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/13 16:28:29 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("NBR: %d\n", ft_atoi(argv[1]));
	return (0);
}

int	ft_atoi(char *str)
{
	char	*ptr;
	int		sign_count;
	int		nbr;

	nbr = 0;
	ptr = str;
	while ((*ptr >= 9 && *ptr <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
			sign_count++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}

	if(!(sign_count % 2))
		nbr = -nbr;
	return (nbr);
} 
