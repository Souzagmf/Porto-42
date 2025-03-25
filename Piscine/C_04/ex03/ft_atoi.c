/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabmiran <gabmiran@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:52:06 by gabmiran          #+#    #+#             */
/*   Updated: 2025/03/10 18:39:59 by gabmiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str);
char	ft_signal(char *str);
char	ft_count_signal(char *str);
/*
int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%d\n",ft_atoi(argv[1]));
	return (0);
}
*/
int	ft_atoi(char *str)
{
	int	number;
	char signal;
	
	signal = ft_signal(str);
	number = 0;
	
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			printf("Char: %c\n",*str);
			number = number * 10 + (*str - '0');
			printf("Number: %d\n",number); 	
			if (*(str + 1) < '0' || *(str + 1) > '9')
				break;	
		}
		str++;
	}
	printf("Signal: %c\n", signal);
	if(signal == '-')
		return (number * (-1));
	return (number);
}

/* Take all signals and  return only one signal */
char	ft_signal(char *str)
{
	char	signal[20];
	char	*ptr_str;
	int		index;

	index = 0;
	ptr_str = str;
	while (*ptr_str)
	{
		if ((*ptr_str == '-' || *ptr_str == '+'))
		{
			signal[index] = *ptr_str;
			index++;
		}
		if (*(ptr_str + 1) >= '0' || *(ptr_str + 1) >= '9')
			break;
		ptr_str++;
	}
	signal[index] = '\0';
	return (ft_count_signal(str));
}
 /* count the signals to decide if is POS or NEG */
char	ft_count_signal(char *str)
{
	int	count;
	int index;

	index = 0;
	count = 0;
	while (str[index])
	{
		if (str[index] == '-')
			count++;
		index++;
	}
	if (!((count % 2) == 0) || index == 1)
		return ('-');
	return ('+');
}










	
