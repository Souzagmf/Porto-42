#include <stdio.h>
#include "libft.h"

// Return a pointer for the first occurency of "c" in "str"

char *ft_strchr(const char *str, char c)
{

	while (*str)
	{
		if (*str == c)
		{
			return (char *)str;
		}

		str++;
	}
	return NULL;
}
/*
int main(void)
{
	const char *str = "Hello, World!!";

	printf("%s\n", ft_strchr(str, 'l'));
}*/