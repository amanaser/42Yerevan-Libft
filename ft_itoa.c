/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanaser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:26:04 by amanaser          #+#    #+#             */
/*   Updated: 2021/01/31 14:33:30 by amanaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		size;
	long	num;

	num = n;
	size = ft_length(num);
	if (!(str = (char *)malloc(sizeof(char) * ft_length(num) + 1)))
		return (NULL);
	if (num < 0)
	{
		*str = '-';
		num *= -1;
	}
	if (num == 0)
		*str = '0';
	*(str + size) = '\0';
	--size;
	while (num)
	{
		*(str + size) = (num % 10) + '0';
		num = num / 10;
		size--;
	}
	return (str);
}
