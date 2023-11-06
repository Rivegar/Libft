/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:48:15 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/06 10:49:42 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunbr(long n)
{
	long	num;
	int		count;

	num = n;
	count = 0;
	if (num > 9)
	{
		count = ft_putnbr(num / 10);
		num = num % 10;
	}
	if (num <= 9)
	{
		ft_putchar_fd(num + 48, 1);
		count++;
	}
	return (count);
}
