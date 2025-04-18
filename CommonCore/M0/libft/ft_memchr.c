/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:31:58 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//	locate byte in byte string.

void	*ft_memchr(const void *src, int ch, size_t bytes)
{
	size_t			index;
	unsigned char	*_src;

	index = 0;
	_src = (unsigned char *)src;
	while (index < bytes)
	{
		if (_src[index] == (unsigned char)ch)
			return (&_src[index]);
		index++;
	}
	return (NULL);
}
