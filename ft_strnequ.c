/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:58:38 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/26 15:09:20 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int		k;

	if (!(s1 && s2))
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s1 != '\0' && *s2 != '\0')
	{
		k = ft_strncmp((char *)s1, (char *)s2, n);
		if (k != 0)
			return (0);
	}
	return (1);
}
