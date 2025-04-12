#include "libft.h"

/*
    Concatenate 2 strings and return a pointer to new string
*/
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t lenS1;
    size_t lenS2;
    char *join;
    char *ptr;

    lenS1 = ft_strlen(s1);
    lenS2 = ft_strlen(s2);
    join = (char *)malloc(sizeof(char) * (lenS1 + lenS2));
    ptr = join;
    if(!join)
        return (NULL);

    while(*s1)
    {
        *join = *s1;
        s1++;
        join++;
    }
    while (*s2)
    {
        *join = *s2;
        s2++;
        join++;
    }
    join = '\0';
    

    return (ptr);
}