/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:01:44 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/03 13:07:10 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putstr(char *str);

int	main(void)
{
	char	*arr_str;

	arr_str = "Highway to hell";
	ft_putstr(arr_str);

	return (0);
}
*/
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(STDOUT_FILENO, str, 1);
		str++;
	}
}
