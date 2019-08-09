/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:39:30 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/25 17:21:40 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**a;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(a = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		if (!(a[i] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[j], c) + 1))))
			return (NULL);
		k = 0;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			a[i][k++] = s[j++];
		a[i][k] = '\0';
		i++;
	}
	a[i] = (NULL);
	return (a);
}
