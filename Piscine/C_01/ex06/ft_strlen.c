#include <stdio.h>

void	ft_strlen(char *str);


int	main(void)
{
	char string_arr[] = "The best 42 porto";

	ft_strlen(string_arr);
}


void	ft_strlen(char *str)
{
	int	index;
	int	count_letter;

	count_letter = 0;
	index = 0;
	while (str[index] != '\0')
	{	count_letter++;
		index++;
	}

	printf("Size: %d", count_letter);
}

