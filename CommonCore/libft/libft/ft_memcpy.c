/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:33:46 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy a string

void	*ft_memcpy(void *dest, const void *src, size_t bytes)
{
	unsigned char		*_dest;
	const unsigned char	*_src;

	_dest = (unsigned char *)dest;
	_src = (const unsigned char *)src;
	if (!_dest && !_src)
		return (NULL);
	while (bytes--)
		*_dest++ = *_src++;
	return (dest);
}
