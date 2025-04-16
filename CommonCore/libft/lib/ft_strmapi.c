#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *result;
	size_t index;

	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return NULL;
	index = 0;
	while (index < (size_t)ft_strlen(s))
	{
		result[index] = (*f)(index, s[index]);
		index++;
	}
	result[index] = '\0';

	return (result);
}