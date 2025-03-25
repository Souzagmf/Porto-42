/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 14:20:26 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/11 15:46:53 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	while (argc > 1)
	{
		write(STDOUT_FILENO, argv[argc - 1], ft_strlen(argv[argc - 1]));
		write(STDOUT_FILENO, "\n", 1);
		argc--;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
