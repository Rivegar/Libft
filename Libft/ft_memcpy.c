/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:26:09 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/13 12:02:41 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	i = 0;
	tempdest = (unsigned char *) dest;
	tempsrc = (unsigned char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		++i;
	}
	return (dest);
}
