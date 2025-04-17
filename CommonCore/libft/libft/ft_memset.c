/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:36:00 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// write a byte to a byte string

void	*ft_memset(void *p_src, int s_copy, size_t byte_n)
{
	unsigned char	*s;

	s = (unsigned char *)p_src;
	while (byte_n > 0)
	{
		*s = s_copy;
		s++;
		byte_n--;
	}
	return (p_src);
}
