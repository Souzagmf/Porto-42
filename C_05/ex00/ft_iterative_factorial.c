#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
	return (0);
}

int ft_iterative_factorial(int nb)
{
	int	result;
	unsigned int	index;

	index = 1;
	result = 1;
	if(nb == 0)
		return (1);
	while(index <= nb)
	{	
		result = index * result;
		index++;
	}
	return (result);
}

