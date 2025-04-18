/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 15:03:40 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	y;

	if (*needle == '\0')
		return ((char *)haystack);
	index = 0;
	while (haystack[index] && len > 0)
	{
		y = 0;
		while (haystack[index + y] == needle[y])
		{
			if (needle[y + 1] == '\0')
				return ((char *)(haystack + index));
			y++;
		}
		index++;
		len--;
	}
	return (NULL);
}
