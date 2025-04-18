/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Gabmiran <Gabmiran@student.42Porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:53:16 by Gabmiran          #+#    #+#             */
/*   Updated: 2025/04/17 11:53:33 by Gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>
int main(void)
{
	char *s = "Life-its-not-a-stramberry";
	char **st = ft_split(s, '-');
	int i = 0;
	while (st[i])
	{
		ft_putendl_fd(st[i], 1);
		ft_isalpha()
		i++;
	}

	return (0);
}
