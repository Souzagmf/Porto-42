#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*
int	main(void)
{
	int	num_a;
	int	num_b;
	int	num_div;
	int	num_mod;

	num_a = 26;
	num_b = 9;
	num_div = 0;
	num_mod = 0;

	ft_div_mod(num_a, num_b, &num_div, &num_mod);

	return (0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		*div = 0;
		*mod = 0;
	}
}
