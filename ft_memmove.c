/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 14:06:54 by amanaser          #+#    #+#             */
/*   Updated: 2021/02/01 15:28:44 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char buff[len];

	if (!dst && !src)
		return (NULL);
	ft_memcpy(buff, src, len);
	ft_memcpy(dst, buff, len);
	return (dst);
}
