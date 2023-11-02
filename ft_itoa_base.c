/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:24:32 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/02 10:28:08 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(size_t number, char *base)
{
	size_t	num;
	size_t	len;
	char	*str;

	len = 0;
	num = number;
	while (number)
	{
		len++;
		number /= 16;
	}
	if (num == 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0 || len)
	{
		str[--len] = base[num % 16];
		num /= 16;
	}
	return (str);
}
