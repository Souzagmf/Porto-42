// #include <stdio.h>
#include "libft.h"

int ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int main()
{
	char *str = "Hello, World!";
	printf("Length of string: %d\n", ft_strlen(str));
	return 0;
}*/