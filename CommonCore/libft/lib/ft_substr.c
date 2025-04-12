#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;

    if (start >= (unsigned int)ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, s + start, len + 1);
    sub[len] = '\0';
    return (sub);
    
}