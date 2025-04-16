#include "libft.h"
#include <stdlib.h>
/*
	Convert (CHAR) to (INT)
*/
int ft_atoi(unsigned char *s)
{
	int neg;
	int res;

	res = 0;
	neg = 0;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			neg = 1;
		s++;
	}
	while (*s >= 48 && *s <= 57)
	{
		res = (res * 10) + (*s - '0');
		s++;
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

	for (int index = 0; index < 5; index++)
	{
		printf("Testing: \"%s\"\n", test_strings[index]);
		printf("ft_atoi: %d\n", ft_atoi((unsigned char *)test_strings[index]));
		printf("atoi:    %d\n\n", atoi(test_strings[index]));
	}

	return 0;
}*/
