#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
//void *ft_memmove(void *dst, const void *src, size_t len);

//string copy & concat
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t strlcat(char *dst, const char *src, size_t size);

//char search
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *str, int ch);

//comparisons 
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);

//memory allocation helpers 
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);

//substring allocation
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);

//string split
char **ft_split(char const *s, char c);

//conversion functions
char* ft_itoa(int n);


int ft_atoi(const char *str);



#endif