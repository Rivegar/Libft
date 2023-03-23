/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:26:01 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/23 14:40:10 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(long long n)
{
	int	len;

	len = (n == 0);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	nlong;
	int			len;
	char		*str;
	int			sign;

	sign = 1;
	nlong = n;
	if (nlong < 0)
	{
		sign = -1;
		nlong = -nlong;
	}
	len = ft_intlen(nlong);
	str = (char *)malloc(len + 1 + (sign == -1));
	if (!str)
		return (NULL);
	if (sign == -1)
		*str = '-';
	str += len + (sign == -1);
	*str = '\0';
	while (len--)
	{
		*(--str) = '0' + (nlong % 10);
		nlong /= 10;
	}
	return (str - (sign == -1));
}
