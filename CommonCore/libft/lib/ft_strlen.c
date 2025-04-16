// #include <stdio.h>
#include "libft.h"

int ft_strlen(const char *s)
{
	int index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}
/*
int main()
{
	char *s = "Hello, World!";
	printf("Length of string: %d\n", ft_strlen(s));
	return 0;
}*/