/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:26:01 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/23 15:42:39 by arivero-         ###   ########.fr       */
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
	char		*str;
	int			len;

	nlong = n;
	if (n < 0)
	{
		nlong = -(long long)n;
		len = ft_intlen(nlong) + 1;
	}
	else
		len = ft_intlen(nlong);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = nlong % 10 + '0';
		nlong /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
