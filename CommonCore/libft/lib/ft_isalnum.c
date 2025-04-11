// #include <stdio.h>
#include "libft.h"

// The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.
int ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('z'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('!'));
	return (0);
}*/