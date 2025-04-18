/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 15:04:23 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return a pointer for the last occurency of "c" in "s"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_point;

	last_point = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_point = s;
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return ((char *)last_point);
}
