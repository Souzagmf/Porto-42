#include <string.h>
#include "libft.h"
const char *ft_strrchr(const char *str, char c)
{
	const char *last_point;

	last_point = NULL;
	while (*str)
	{
		if (*str == c)
			last_point = str;
		str++;
	}
	return last_point;
}

/*
#include <stdio.h>
int main(void)
{
	char *str = "Hello, World!!";
	printf("%s\n", ft_strrchr(str, 'l'));
}
*/