/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:46:09 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/25 18:53:10 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*srcs;
	unsigned char	*dsts;

	srcs = (unsigned char *)src;
	dsts = (unsigned char *)dst;
	if (src == dst)
		return (dst);
	if (srcs < dsts)
		while (len--)
			dsts[len] = srcs[len];
	else
		ft_memcpy(dsts, srcs, len);
	return (dsts);
}
