/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/05/16 23:11:06 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size-bounded string copy.

size_t	ft_strlcpy(char *destiny, const char *source, size_t size)
{
	const char	*ptr;

	ptr = source;
	if (size == 0)
		return (ft_strlen(ptr));
	while (((size - 1) > 0) && *source)
	{
		*destiny = *source;
		destiny++;
		source++;
		size--;
	}
	*destiny = '\0';
	return (ft_strlen(ptr));
}
