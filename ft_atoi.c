/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:43:15 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/07 12:12:56 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long int	nbr;
	int					sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*str) && *str)
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
		nbr = nbr * 10 + (*str++ - 48);
	if (nbr > 9223372036854775807)
		return (sign > 0 ? -1 : 0);
	return (nbr * sign);
}
