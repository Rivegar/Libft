/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:24:32 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/02 10:04:41 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(size_t number, char *base)
{
	size_t	num;
	size_t	len;
	char	*hex;

	len = 0;
	num = number;
	while (num)
	{
		len++;
		num = num / 16;
	}
	if (num == 0)
		len++;
	hex = malloc(sizeof(char) * (len + 1));
	if (!hex)
		return (NULL);
	hex[len] = '\0';
	while (nbr != 0 || len)
	{
		hex[--len] = base[num % 16];
		num /= 16;
	}
	return (hex);
}
