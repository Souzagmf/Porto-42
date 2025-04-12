#include "libft.h"

void* ft_calloc(size_t num, size_t size){
    char *ptr;

    ptr = (char *)malloc(size * num);

    if(ptr)
        ft_bzero(ptr, size * num);
    return (ptr);
}