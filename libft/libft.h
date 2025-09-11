#include <stddef.h>

#ifndef LIBFT_H
#define LIBFT_H

//character checker
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

//test case conversion
int ft_tolower(int ch);
int ft_toupper(int ch);

//string length/memory basics
size_t ft_strlen(const char *str);
void *ft_memset(void *dest, int c, size_t count);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);

#endif