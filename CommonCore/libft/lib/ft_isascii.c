// #include <stdio.h>
#include "libft.h"

// The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isascii('z'));
	printf("%d\n", ft_isascii('Z'));
	printf("%d\n", ft_isascii('0'));
	printf("%d\n", ft_isascii('9'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('!'));
	return (0);
}*/