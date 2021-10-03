#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct  s_list
{
    void            *content;
    struct s_list *next;
}               t_list;

//part1
int ft_atoi(char *str);
void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isascii(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memset(void *s, int c, size_t n);
char    *ft_strchr(char *str, char c);
char    *ft_strdup(const char *s);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
int     ft_strlen(const char* str);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(char *large, char *small, size_t length);
char    *ft_strrchr(const char *s, int c);
char    ft_tolower(char c);
char    ft_toupper(char c);

//part2
char    *ft_itoa(int n);
char    **ft_split(char const *s, char c);
void    ft_striteri(char *s, void(*f)(unsigned int, char *));
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_substr(char const *s, unsigned int start, size_t len);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

//bonus part
void    ft_lstadd_front(t_list **lst, t_list *new);
void    ft_lstadd_back(t_list **lst, t_list *new);
t_list  *ft_lstlast(t_list *list);
t_list  *ft_lstnew(void *content);
int     ft_lstsize(t_list *lst);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif