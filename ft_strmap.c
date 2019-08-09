/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 23:05:12 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/15 00:50:48 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh;

	fresh = NULL;
	i = 0;
	if (f && s)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		while (s[i] != '\0')
		{
			fresh[i] = s[i];
			i++;
		}
		fresh[i] = '\0';
		i = 0;
		while (fresh[i] != '\0')
		{
			fresh[i] = f(fresh[i]);
			i++;
		}
	}
	return (fresh);
}
