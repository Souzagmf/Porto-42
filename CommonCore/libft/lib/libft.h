#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int ft_atoi(unsigned char *s);
void ft_bzero(void *s, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
char *ft_strchr(const char *s, int c);
size_t ft_strlcat(char *dest, const char *src, size_t size);
unsigned int ft_strlcpy(char *destiny, const char *source, size_t size);
int ft_strlen(const char *s);
int ft_strncmp(const char *source, const char *compare, size_t max);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_memset(void *p_src, int s_copy, size_t byte_n);
void *ft_memcpy(void *dest, const void *src, size_t bytes);
void *ft_memmove(void *dest, const void *src, size_t bytes);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t num, size_t size);
char *ft_strdup(const char *s);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
void ft_putchar_fd(char const s, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_itoa(int n);

#endif