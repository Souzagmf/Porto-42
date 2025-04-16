#include "libft.h"

/*
    Dupicate the (s) and return a new pointer to duplicated word
*/
char *ft_strdup(const char *s)
{
    char *dup;

    dup = (char *)malloc(ft_strlen(s) + 1);
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, s, ft_strlen(s) + 1);

    return (dup);
}