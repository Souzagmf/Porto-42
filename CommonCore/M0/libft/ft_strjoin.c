/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 14:56:16 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Concatenate 2 strings and return a pointer to new string
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*join;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (len1 + len2));
	ptr = join;
	if (!join)
		return (NULL);
	while (*s1)
	{
		*join = *s1;
		s1++;
		join++;
	}
	while (*s2)
	{
		*join = *s2;
		s2++;
		join++;
	}
	*join = '\0';
	return (ptr);
}
