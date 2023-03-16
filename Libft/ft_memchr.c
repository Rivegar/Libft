/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:01:01 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/16 14:51:27 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*altstr;
	size_t			i;

	altstr = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (altstr[i] == (unsigned char)c)
		{
			return (&altstr[i]);
		}
		i++;
	}
	return (NULL);
}
