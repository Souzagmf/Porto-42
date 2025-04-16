#include "libft.h"

// Return a pointer for the first occurency of "c" in "s"

char *ft_strchr(const char *s, int c)
{

	while (*s)
	{
		if (*s == (char)c)
			return (char *)s;
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return NULL;
}