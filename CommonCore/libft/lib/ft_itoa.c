#include "libft.h"

// Take the size of number by decimal case
static int ft_numlen(int n)
{
	int len;
	long nbr;

	len = 0;
	nbr = n;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

// Convert int to char
char *ft_itoa(int n)
{
	char *str;
	int len;
	long nbr;

	nbr = n;
	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len + 1] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
#include <stdio.h>

int main(void)
{
	int n = 15698;
	char *s = ft_itoa(n);
	// Test uppercase conversion
	printf("String: %s", s);

	return (0);
}
