/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 20:31:58 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/16 20:48:11 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (del)(void *, size_t))
{
	t_list	*g;

	g = (*alst);
	while (g)
	{
		if (alst && *alst)
		{
			del(g->content, g->content_size);
			free(*alst);
			*alst = 0;
			g = g->next;
			(*alst) = g;
		}
	}
}
