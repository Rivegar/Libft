/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:33:49 by arivero-          #+#    #+#             */
/*   Updated: 2023/04/02 20:25:40 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*auxdest;
	unsigned char	*auxsrc;

	auxdest = (unsigned char *) dest;
	auxsrc = (unsigned char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	else
		while (n--)
			auxdest[n] = auxsrc[n];
	return (dest);
}
