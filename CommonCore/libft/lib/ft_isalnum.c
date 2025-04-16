#include "libft.h"

/*
	tests for any character for which isalpha(3) or isdigit(3) is true.
*/

int ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}