/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sergio <sergio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 20:33:21 by shenriqu          #+#    #+#             */
/*   Updated: 2021/08/12 07:43:59 by sergio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *desert, const char *grain, size_t len);
int		ft_strncmp(const char	*s1, const char	*s2, size_t	n);
size_t	ft_strlcpy(char	*dst, const char	*src, size_t	size);
size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void	*str, int	c, size_t	n);
void	*ft_memmove(void *dst, const void *src, size_t len);
char	*ft_strdup(const char *str1);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

// part 2

char *ft_itoa(int n);

#endif
