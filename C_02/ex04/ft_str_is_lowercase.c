#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char arr_str_1[] = "aBc";
	ft_str_is_lowercase(arr_str_1);

	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	index;
	int	referencia;

	referencia = 1;
	index = 0;
	if(str[index] != '\0')
	{
		while(str[index] != '\0')
		{
			if(str[index] >= 'a' && str[index] <= 'z')
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
	return (referencia);
}

