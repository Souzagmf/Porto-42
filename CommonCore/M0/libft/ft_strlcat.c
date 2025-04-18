/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:57:58 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size-bounded string concatenation.

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	index;

	index = 0;
	size_dest = 0;
	size_src = 0;
	while (dest[size_dest] && size_dest < size)
		size_dest++;
	while (src[size_src])
		size_src++;
	if (size_dest >= size)
		return (size + size_src);
	while (src[index] && (size_dest + index + 1) < size)
	{
		dest[size_dest + index] = src[index];
		index++;
	}
	dest[size_dest + index] = '\0';
	return (size_dest + size_src);
}
