/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:37:50 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/25 18:33:01 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j] == needle[j] &&
				haystack[i + j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			if ((i + j) > len)
				return (NULL);
			j++;
		}
		i++;
	}
	return (NULL);
}
