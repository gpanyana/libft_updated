/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 13:53:11 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/25 13:47:27 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	char	*str;

	len = ft_intlen(n);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
	{
		str[len] = 48 + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (str);
}
