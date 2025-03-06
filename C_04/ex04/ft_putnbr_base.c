#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);
bool    is_Base_Valid(char *base);
int     conv(char *str);
int     ft_strlen(char *str);
void    ft_show_hex(char *str);

int	main(int argc, char **argv)
{
	int	nums;

	if(argc <= 2|| argc >=4)
		return (0);
	if(!is_Base_Valid(argv[2]))
		return (0);
	nums = conv(argv[1]);
	ft_putnbr_base(nums, argv[2]);
}

/* print the base of number*/
void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;
	int	index;
	char	arr_hex[100];

	base_size = ft_strlen(base);
	index = 0;
	if(nbr <= base_size)
	{
                arr_hex[0] = base[nbr];
		write(1, arr_hex, 1);
		return ;
	}
	while(nbr > 0)
	{
		arr_hex[index] = base[nbr % base_size];
		nbr = nbr / base_size;
		index++;
	}
	if(nbr < 0)
	{
		nbr = 255;
		while(nbr > 0)
		{
			arr_hex[index] = base[nbr % base_size];
                	nbr = nbr / base_size;
                	index++;
		}
	}
	ft_show_hex(arr_hex);	
}

/* case its valid base */
bool	is_Base_Valid(char *base)
{
	int	index_out;
	int	index_in;
	int	base_size;

	index_out = 0;
	index_in = 0;
	base_size = ft_strlen(base);
        if (base_size < 2)
                return (false);
	while (base[index_out])
	{
		if(base[index_out] == '-' || base[index_out] == '+')
			return (false);
		index_in = index_out + 1;
		while (base[index_in])
		{
			if (base[index_out] == base[index_in])
				return (false);
			index_in++;
		}
		index_out++;
	}
	return (true);
}

/* show the result */
void	ft_show_hex(char *str)
{
	int index;

	index = ft_strlen(str);
	while(index >= 0)
	{
		write(1, &str[index - 1], 1);
		index--;
	}
}

/* Do the convertion of string to number */
int	conv(char *str)
{
	int	converted;
	bool	isNegative;

	isNegative = false;
	converted = 0;
	while (*str)
	{
		if(*str == '-')
			isNegative = true;
		converted = (converted * 10) + (*str - '0');
		str++;
	}
	if(isNegative)
		converted = -converted;
	return (converted);
}

/* give the size of string */
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while(str[count])
		count++;
	return (count);
}

