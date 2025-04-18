/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 15:01:34 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *source, const char *compare, size_t max)
{
	while (max > 0)
	{
		if (*source != *compare)
		{
			return ((int)(*source - *compare));
		}
		max--;
		source++;
		compare++;
	}
	return ((int)(*source - *compare));
}
