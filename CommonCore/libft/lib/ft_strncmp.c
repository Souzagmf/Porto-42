#include "libft.h"
#include <stdlib.h>

int ft_strncmp(const char *source, const char *compare, size_t max)
{

	while (max > 0)
	{
		if(source != compare)
		{
			return ((int )(source - compare));
		}
		max--;
		source++;
		compare++;
	}

	return ((int)(source - compare));
}
/*
#include <stdio.h>
int main(int argc, char const *argv[])
{
	char *src = "Wecome to the jungle!!";
	char *cmp = "Welcome to the jungle!!";
	size_t n = 6;
	printf("%d\n\n", ft_strncmp(src, cmp, n));
	return 0;
}
*/
