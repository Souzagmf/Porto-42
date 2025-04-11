// #include <stdio.h>
#include "libft.h"

// Veryfy if the character is printable
int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main()
{
	char c = 'a';
	printf("Is %c printable? %d\n", c, ft_isprint(c));
	return 0;
}*/