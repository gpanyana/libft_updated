/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:17:13 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/13 18:10:29 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;
	size_t	i;

	if (!(fresh = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i <= size)
	{
		fresh[i] = '\0';
		i++;
	}
	return (fresh);
}
