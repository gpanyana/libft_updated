/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:30:24 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/06 18:02:20 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcat(char *restrict s1, const char *restrict s2);
char	*ft_strchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
