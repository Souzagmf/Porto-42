#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int	ft_atoi(char *str);
int     ft_strlen(char *str);
int	*convert_num(char *str);

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		return (0);
	}
	ft_atoi(argv[1]);
	return (0);
}

int	ft_atoi(char *str)
{
	char		num_convert[15];
	unsigned int	index;
 	int		lenght_str, *only_num;
	bool		isNegative;

	lenght_str = 0;
	index = 0;
	isNegative = false;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (*(str - 1) == '-')
			{
				isNegative = true;
			}
			if (!(*(str + 1) >= '0' && *(str +1) <= '9'))
			{
				num_convert[index] = *str;
				break;
			}
			num_convert[index] = *str;	
			index++;
		}	
		str++;
	}
	only_num = convert_num(num_convert);
	if(isNegative)
	{
		write(STDOUT_FILENO, "-", 1);
	}
	while(*only_num)
        {
                printf("%d", *only_num);
                only_num++;
        }
}

int *convert_num(char *str)
{
	int	limit_max;
	static int	num_conv[9];
	int	counter;
	int	index;

	index = 0;
	counter = ft_strlen(str);
	while (counter > 0)
	{
		if(!(str[index] >= '0' && str[index] <= '9'))
			return (NULL);
		if(index >= 9)
			break;
		num_conv[index] = str[index] - '0';
		index++;
		counter--;
	}
	return num_conv;
}

int	ft_strlen(char *str)
{
	int num;
	
	num = 0;
	while (*str)
	{
		num++;
		str++;
	}
	return (num);
}
