/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:45:13 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/24 12:10:18 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	value;
	unsigned char	*beta;

	i = 0;
	value = c;
	beta = b;
	while (i < len)
	{
		beta[i++] = value;
	}
	return (b);
}
