/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:07:40 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/03 15:50:00 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*w;
	int		i;

	i = 0;
	if (!(w = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
	{
		w[i] = s1[i];
		i++;
	}
	w[i] = '\0';
	return (w);
}
