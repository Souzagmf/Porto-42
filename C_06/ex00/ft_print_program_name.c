/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:02:07 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 15:43:46 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_count(char *str);

int	main(int count, char **argv)
{
	if (count < 0)
		return (0);
	write(STDOUT_FILENO, argv[0], ft_count(argv[0]));
	write(STDOUT_FILENO, "\n", 1);
}

int	ft_count(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
