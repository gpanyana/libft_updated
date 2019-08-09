/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 00:40:01 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/15 01:22:51 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
			fresh[i] = f(i, fresh[i]);
			i++;
		}
	}
	return (fresh);
}
