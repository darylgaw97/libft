#ifndef HEADER_H
#define HEADER_H

# ifdef __unix__
#  include <string.h>
# elif defined(_WIN32) || defined(_WIN64)
#  include <cstring>
# endif

#include <stddef.h>
#include <stdlib.h>

typedef struct  s_list
{
    void *content;
    struct s_list *next;
}               t_list;

int ft_atoi(char *str);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(char c);
int ft_isalpha(char c);
int ft_isascii(char c);
int ft_isdigit(char c);
int ft_isprint(char c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(char *str, char c);
char *ft_strdup(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(char *large, char *small, size_t length);
char *ft_strrchr(const char *s, int c);
char ft_tolower(char c);
char ft_toupper(char c);

#endif