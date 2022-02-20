/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/31 18:44:06 by amanaser          #+#    #+#             */
/*   Updated: 2021/01/31 20:18:49 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *list;

	if (*lst)
	{
		list = ft_lstlast(*lst);
		list->next = new;
		new->next = NULL;
	}
	else
	{
		(*lst) = new;
		new->next = NULL;
	}
}
