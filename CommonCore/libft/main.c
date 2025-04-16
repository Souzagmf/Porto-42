#include "lib/libft.h"
#include <stdio.h>
int main(void)
{
	int n = 15698;

	ft_putendl_fd("*****TESTE****", 1);
	// Test uppercase conversion
	ft_putstr_fd(ft_itoa(n), 1);

	return (0);
}