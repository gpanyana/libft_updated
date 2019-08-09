/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:32:33 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/07 11:36:44 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*g;
	unsigned char	t;

	g = (unsigned char *)s;
	t = (unsigned char)c;
	while (n--)
	{
		if (*g == t)
		{
			return (g);
		}
		g++;
	}
	return (NULL);
}
