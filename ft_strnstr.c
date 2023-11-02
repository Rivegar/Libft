/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:26:28 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/17 15:05:34 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	litlen;
	char	*cbig;
	char	*clittle;

	if (*little == '\0')
		return ((char *)big);
	cbig = (char *) big;
	clittle = (char *) little;
	i = 0;
	litlen = ft_strlen(little);
	while (big[i] != '\0' && (i + litlen) <= len)
	{
		if (ft_strncmp((cbig + i), clittle, litlen) == 0)
			return (cbig + i);
		i++;
	}
	return (NULL);
}
