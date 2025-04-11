#include "libft.h"
#include <stdlib.h>

int ft_atoi(unsigned char *str)
{
	int neg;
	int res;

	res = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	if (neg != 0)
		res = -res;

	return res;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *test_strings[] = {
		"42",
		"-42",
		"   +123",
		"  -456",
		"789abc"};

	for (int i = 0; i < 5; i++)
	{
		printf("Testing: \"%s\"\n", test_strings[i]);
		printf("ft_atoi: %d\n", ft_atoi((unsigned char *)test_strings[i]));
		printf("atoi:    %d\n\n", atoi(test_strings[i]));
	}

	return 0;
}*/
