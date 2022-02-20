/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 20:13:02 by amanaser          #+#    #+#             */
/*   Updated: 2021/02/01 15:29:33 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	int					i;

	i = 0;
	str = s;
	while (n--)
	{
		if (str[i] == (unsigned char)c)
			return (void *)(s + i);
		++i;
	}
	return (NULL);
}
