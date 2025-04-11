// #include <stdio.h>
#include "libft.h"

// Return the character c converted to lowercase.
int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*
int main(void)
{
	char c = 'A';
	printf("Lowercase: %c\n", ft_tolower(c));
	return (0);
}
*/