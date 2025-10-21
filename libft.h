/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: e06 <e06@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:10:30 by e06               #+#    #+#             */
/*   Updated: 2025/10/21 16:01:20 by e06              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#define SIZE_T_MAX 4294967295U

#include <stdlib.h>
#include <unistd.h>
#include "./ft_printf/ft_printf.h"
#include "./get_next_line/get_next_line.h"

// Prototypes string (or char) functions
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *str, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *str, int fd);
char **ft_split(const char *s, char c);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strtrim(char const *str, char const *set);
char *ft_substr(const char *s, unsigned int start, size_t len);

// Prototypes memory functions
void ft_bzero(void *src, size_t n);
void *ft_calloc(size_t n, size_t size);
void *ft_memchr(const void *src, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *src, int c, size_t n);

// Prototypes comparison functions
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_isspace(int c);

// Prototypes utils functions
int ft_atoi(const char *str);
long ft_atol(const char *str);
long long ft_atoll(const char *str);
char *ft_itoa(int n);
int ft_toupper(int c);
int ft_tolower(int c);

#endif
