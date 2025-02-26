#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char arr_str_1[] = "It's My Life\n";
	ft_str_is_printable(arr_str_1);

	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	index;
	int	referencia;

	referencia = 1;
	index = 0;
	if(str[index] != '\0')
	{
		while(str[index] != '\0')
		{
			if(str[index] >= ' ' && str[index] <= '~')
			{
				referencia = 1;		
			}
			else
			{
				referencia = 0;
				printf("Retorno:   %d\n", referencia);
				return (0);
			}
			index++;
		}
	}
	printf("Retorno:   %d\n", referencia);	
	return (1);
}