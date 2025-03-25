/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:10:41 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 15:45:52 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc < 1)
		return (0);
	while (index < argc)
	{
		write(1, argv[index], ft_strlen(argv[index]));
		write(1, "\n", 1);
		index++;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
