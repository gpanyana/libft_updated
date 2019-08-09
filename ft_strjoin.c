/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 02:49:45 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/17 15:51:50 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		len;

	fresh = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	if (s1 && s2)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		if (fresh)
		{
			ft_strcpy(fresh, s1);
			ft_strcat(fresh, s2);
		}
	}
	return (fresh);
}
