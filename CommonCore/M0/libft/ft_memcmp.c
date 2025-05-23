/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:32:41 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compare 2 string

int	ft_memcmp(const void *src1, const void *src2, size_t bytes)
{
	size_t			index;
	unsigned char	*_src1;
	unsigned char	*_src2;

	index = 0;
	_src1 = (unsigned char *)src1;
	_src2 = (unsigned char *)src2;
	if (bytes == 0)
		return (0);
	while (index < bytes)
	{
		if (_src1[index] != _src2[index])
			return (_src1[index] - _src2[index]);
		index++;
	}
	return (0);
}
