/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:27:42 by ael-hadj          #+#    #+#             */
/*   Updated: 2024/10/24 14:00:58 by ael-hadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* ft_is* 5/5 functions  5*/
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
/* functions so far 5 */
/* --------------------- */
/* --------------------- */
/* ft_to* 2/2 functions */
int		ft_tolower(int c);
int		ft_toupper(int c);
/* functions so far 7 */
/* --------------------- */
/* --------------------- */
/* ft_put*_fd functions 4/4 */
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
/* functions so far 7 + 4 = 11 */
/* --------------------- */
/* --------------------- */
/* memory manipulation functions 6/6 */
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
/* functions so far 11 + 8 = 19 */
/* --------------------- */
/* --------------------- */
/* --------------------- */
/* atoi && itoa */
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
/* functions so far 19 + 2 = 21 */
/* --------------------- */
/* --------------------- */
/* ---------------------------- */
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *s, char c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strtrim(char const *str, char const *set);
char	*ft_substr(char const *str, unsigned int start, size_t len);

#endif
