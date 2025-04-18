/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:34:48 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copy bytes of string 

void	*ft_memmove(void *dest, const void *src, size_t bytes)
{
	unsigned char	*_dest;
	unsigned char	*_src;

	_dest = (unsigned char *)dest;
	_src = (unsigned char *)src;
	if (!_dest && !_src)
		return (NULL);
	if (_src > _dest)
		return (ft_memcpy(_dest, _src, bytes));
	while (bytes--)
		_dest[bytes] = _src[bytes];
	return (_dest);
}
