#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int ft_atoi(unsigned char *str);
void ft_bzero(void *str, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_strchr(const char *str, char c);
size_t ft_strlcat(char *dest, const char *src, size_t size);
unsigned int ft_strlcpy(char *destiny, const char *source, size_t size);
int ft_strlen(const char *str);
int ft_strncmp(const char *source, const char *compare, size_t max);
const char *ft_strrchr(const char *str, char c);
int ft_tolower(int c);
int ft_toupper(int c);

#endif