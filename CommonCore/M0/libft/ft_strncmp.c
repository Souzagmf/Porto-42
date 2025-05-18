/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/05/17 12:19:37 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *source, const char *compare, size_t max)
{
	size_t	index;

	index = 0;
	while (index < max)
	{
		if (source[index] != compare[index])
			return ((unsigned char)source[index] - (unsigned char) compare[index]);
		if (source[index] == '\0' || compare[index] == '\0')
			return ((unsigned char) source[index] - (unsigned char) compare[index]);
		index++;
	}
	return ((unsigned char) source[index - 1] - (unsigned char) compare[index - 1]);
}
