/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:50:11 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/25 17:15:49 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(const char *s, char c)
{
	size_t			wc;
	unsigned int	i;

	wc = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			wc++;
		while (s[i] != c && s[i + 1])
		{
			i++;
		}
		i++;
	}
	return (wc);
}
