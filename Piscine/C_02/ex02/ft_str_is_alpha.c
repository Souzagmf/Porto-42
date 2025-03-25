#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char arr_str_1[] = "Drugs In Me Is You";
	char arr_str_2[] = "DrugsInMeIsYou";
	char arr_str_3[20];

	ft_str_is_alpha(arr_str_1);
	ft_str_is_alpha(arr_str_2);
	ft_str_is_alpha(arr_str_3);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	index;
	int	referencia;

	referencia = 1;
	index = 0;
	if(str[index] != '\0' && str != NULL)
	{
		while(str[index] != '\0')
		{
			if((str[index] >= 'a' && str[index] <= 'z') || (str[index] >= 'A' && str[index] <= 'Z'))
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

