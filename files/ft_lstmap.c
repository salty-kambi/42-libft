/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsuau <lsuau@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:38:07 by lsuau             #+#    #+#             */
/*   Updated: 2021/11/05 19:17:33 by lsuau            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*bl;

	l = malloc(sizeof(t_list));
	if (!l || !lst)
		return (0);
	l->content = f(lst->content);
	bl = l;
	lst = lst->next;
	while (lst)
	{
		l->next = ft_lstnew(f(lst->content));
		l = l->next;
		if (!l)
		{
			ft_lstclear(&bl, del);
			return (0);
		}
		lst = lst->next;
	}
	return (bl);
}
