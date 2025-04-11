// #include <stdio.h>
#include "libft.h"

// Return the character c converted to uppercase.
int ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
int main(void)
{
	char c = 'a';
	printf("Uppercase: %c\n", ft_toupper(c));
	return (0);
}*/