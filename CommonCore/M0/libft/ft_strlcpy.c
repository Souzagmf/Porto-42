/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:58:58 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size-bounded string copy.

unsigned int	ft_strlcpy(char *destiny, const char *source, size_t size)
{
	unsigned int	src_size;

	src_size = 0;
	while (source[src_size])
		src_size++;
	if (size == 0)
		return (src_size);
	while (size > 0)
	{
		*destiny = *source;
		destiny++;
		source++;
		size--;
	}
	*destiny = '\0';
	return (src_size);
}
