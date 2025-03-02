#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char arr_string_1[] = "No man's sky";
    char arr_string_2[] = "No mans sky";
    int result;

    result = ft_strcmp(arr_string_1, arr_string_2);
    printf("%d\n", result);
}

int ft_strcmp(char *s1, char *s2)
{
    int result_comparison;

    result_comparison = 0;
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 != *s2)
        {
            result_comparison = (unsigned char)*s1 - (unsigned char)*s2;
            return(result_comparison);
        }
        s1++;
        s2++;
    }

    return ((unsigned char)*s1 - (unsigned char)*s2);
}