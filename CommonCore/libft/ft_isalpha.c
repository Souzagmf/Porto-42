#include "libft.h"
// #include <stdio.h>

// returns 1 if c is an alphabetic character, 0 otherwise.
int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
int main(void)
{
	char c = 'a';
	printf("Alpha: %d\n", ft_isalpha(c));
	return (0);
}
*/