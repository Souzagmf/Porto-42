// #include <stdio.h>
#include "libft.h"

// Returns 1 if c is a digit, 0 otherwise.
int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int main(void)
{
	char c = 'a';
	printf("Digit: %d\n", ft_isdigit(c));
	return (0);
}
*/