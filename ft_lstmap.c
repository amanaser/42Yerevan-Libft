/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 12:36:26 by amanaser          #+#    #+#             */
/*   Updated: 2021/02/01 16:16:03 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *temp;

	if (!lst)
		return (NULL);
	if (!(head = ft_lstnew(f(lst->content))))
		ft_lstdelone(lst, del);
	else
	{
		temp = head;
		lst = lst->next;
	}
	while (lst)
	{
		if (!(temp->next = ft_lstnew(f(lst->content))))
			ft_lstdelone(lst, del);
		temp = temp->next;
		lst = lst->next;
	}
	return (head);
}
