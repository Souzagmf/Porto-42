/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:54:08 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 11:54:19 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
	Convert (CHAR) to (INT)
*/
int ft_atoi(const char *s)
{
	int neg;
	int res;

	res = 0;
	neg = 0;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			neg = 1;
		s++;
	}
	while (*s >= 48 && *s <= 57)
	{
		res = (res * 10) + (*s - '0');
		s++;
	}
	if (neg != 0)
		res = -res;
	return (res);
}
