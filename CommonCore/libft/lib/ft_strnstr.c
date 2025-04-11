#include "libft.h"
#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	/*Take the first substring on a string with len of characters*/

	/*
		->hayhack will be the string to be search
		->needle it's what we whant to found
		->len max of character that we'l search on haystack
	*/
	size_t i;
	size_t y;

	/* haystack if needle it's null or empty	*/
	if (*needle == '\0')
		return ((char *)haystack);

	i = 0;
	while (haystack[i] && len > 0)
	{
		y = 0;
		while (haystack[i + y] == needle[y])
		{
			/*  Pointer to first occurance of needle on haystack */
			if (needle[y + 1] == '\0')
				return ((char *)(haystack + i));
			y++;
		}
		i++;
		len--;
	}
	/* NULL if needle not found on limit of len*/
	return NULL;
}