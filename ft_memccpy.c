/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 12:11:10 by amanaser          #+#    #+#             */
/*   Updated: 2021/02/01 15:17:43 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	int						i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = dst;
	s = src;
	while (n--)
	{
		d[i] = s[i];
		if (s[i++] == (unsigned char)c)
			return (d + i);
	}
	return (NULL);
}
