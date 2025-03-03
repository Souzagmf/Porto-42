#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);
int     *num_converter(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	ft_atoi( argv[1]);
	return (0);
}

int	ft_atoi(char *str)
{
	char	*num_convert;
	int	*only_number;

	while (*str)
	{
		if (*str >= '0' && *str <= '9') //caso seja um numero 
		{
			if(*(str + 1) < '0' && *(str + 1) > '9') //Caso a proxima posição não seja um numero
			{
				*num_convert = *str;
				only_number = num_converter(num_convert);
				printf("%s", num_convert);
				//printf("only number: %d\nonly_char: %s\n", *only_number, num_convert);
				return (0);
			}
			*num_convert = *str;
			num_convert++;
		}
		str++;
	}


}

int	*num_converter(char *str)
{
	int *num;

	while (*str)
	{
		*num = *str + '0';
	}
	return (num);
}
