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
	write zeroes to a byte string
*/
void	ft_bzero(void *s, size_t size)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (size-- > 0)
		*ptr++ = 0;
}
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char s[] = "Fada";

	ft_bzero(s, 4);
	printf("%s", s);
	return 0;
}
*/
