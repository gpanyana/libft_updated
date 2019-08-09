/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:43:56 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/13 15:45:01 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*fresh;

	fresh = NULL;
	if (size)
	{
		if (!(fresh = (void *)malloc(size)))
			return (NULL);
		while (size)
			fresh[--size] = 0;
	}
	return ((void *)fresh);
}
