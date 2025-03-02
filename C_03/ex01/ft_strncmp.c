#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char arr_string_1[] = "abcd";
    char arr_string_2[] = "abc";
    int result;
    int original_result;

    result = ft_strncmp("ab", "abc", 3);
    original_result = strncmp("ab", "abc", 3);
    printf("%d\n", result);
    printf("Original: %d\n", original_result);

}

int ft_strncmp(char *s1, char *s2, unsigned int n) // comparison a range N of s1(string) and s2(string)
{
    int result_comparison;

    result_comparison = 0;
    while(n > 0)
    {
        if(*s1 == *s2)
        {
            if(*s1 == '\0') // case the same string
            {
                return (0);
            }
        }
        else
        {
            return result_comparison = (unsigned char)*s1 - (unsigned char)*s2; // difference between quanty s1 and s1
        }        
        s1++;
        s2++;
        n--;
    }
    return (0);
}