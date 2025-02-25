#include <stdio.h>

void	ft_putstr(char *str);

/*
int	main(void)
{
	char string_arr[] = "The best 42 porto";

	ft_putstr(string_arr);
}
*/

void	ft_putstr(char *str)
{
	int	index;
	
	index = 0;
	while (str[index] != '\0')
	{
		printf("%c", str[index]);
		index++;
	}
}

