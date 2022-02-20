/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 20:13:15 by amanaser          #+#    #+#             */
/*   Updated: 2021/02/01 16:05:16 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char const c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	int			i;
	size_t		len;

	i = 0;
	len = 0;
	if (!s1)
		return (NULL);
	while (ft_check(set, *s1))
		s1++;
	if (!(*s1))
	{
		str = ft_strdup("");
		return (str);
	}
	len = ft_strlen(s1);
	while (ft_check(set, *(s1 + len - 1)))
		len--;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_memcpy(str, s1, len);
	*(str + len) = '\0';
	return (str);
}
