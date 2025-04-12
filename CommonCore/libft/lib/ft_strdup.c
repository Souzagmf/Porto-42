#include "libft.h"

char* ft_strdup(const char* s)
{
    char *dup;

    dup = (char *)malloc(ft_strlen(s) + 1);
    ft_strlcpy(dup, s, ft_strlen(s) + 1);

    return (dup);
}