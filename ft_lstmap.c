/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 23:57:24 by gpanyana          #+#    #+#             */
/*   Updated: 2019/08/17 00:58:04 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*new;

	if (!lst)
		return NULL;
	new = f(lst);
	fresh = new;
//	if (!(new = (t_list *)malloc(sizeof(t_list))))
//		return NULL;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = f(lst)))
		{
			free(new->next);
			return NULL;
		}
		new = new->next;
	}
	return (fresh);
}
