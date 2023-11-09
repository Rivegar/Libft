/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:24:32 by arivero-          #+#    #+#             */
/*   Updated: 2023/11/09 10:30:20 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(unsigned long number, char *base, int baseformat)
{
	unsigned long	num;
	unsigned long	len;
	char			*str;

	len = 0;
	num = number;
	while (number)
	{
		len++;
		number /= baseformat;
	}
	if (num == 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0 || len)
	{
		str[--len] = base[num % baseformat];
		num /= baseformat;
	}
	return (str);
}
