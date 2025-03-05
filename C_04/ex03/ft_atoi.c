#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

int	ft_atoi(char *str);
int     ft_strlen(char *str);
int	*convert_num(char *str);
bool	ft_signal_count(char *str);
void ft_print_atoi(char *signals, char *number);

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
 	//int		lenght_str;
	char		signals[10];
	bool		endSignals;	

	endSignals = false;
	//lenght_str = 0;
	index = 0;
	while ((*str == '-' || *str == '+'))
	{
		if(!endSignals)
		{
			signals[index] = *str;
			index++;
		}
		str++;
	}
	index = 0;
	while(*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			endSignals = true;
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
	printf("%s\n", signals);	
	ft_print_atoi(signals, num_convert);
}

void ft_print_atoi(char *signals, char *number)
{
	int *only_num;
	bool isNegative;

	isNegative = ft_signal_count(signals);
	only_num = convert_num(number);
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

bool    ft_signal_count(char *str)
{
	bool	isNegative;
	char	temp_Sig;

	temp_Sig = '+';
	isNegative = false;
	while(*str)
	{
		if(!(*str))
			return (isNegative);
		if(*str == '-')
			if(temp_Sig == '+') 
				temp_Sig = '-';
			else if(temp_Sig == '-')
				temp_Sig = '+';
			else
				temp_Sig = '-';
		if(*str == '+')
                        if(temp_Sig == '+')
                                temp_Sig = '+';
                        else if(temp_Sig == '-')
                                temp_Sig = '-';
			else
				temp_Sig = '+';
		str++;
	}
	if(temp_Sig == '-')
		isNegative = true;
	return (isNegative);
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
	while (str[num])
	{
		num++;
	}
	return (num);
}
