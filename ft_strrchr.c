/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 10:19:32 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/16 11:32:51 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*altstr;

	altstr = (char *)str;
	i = ft_strlen(str);
	if (c == '\0')
	{
		return (&altstr[i]);
	}
	while (i != 0)
	{
		if (altstr[i] == (char)c)
		{
			return (&altstr[i]);
		}
		i--;
	}
	if (str[0] == (char)c)
	{
		return (altstr);
	}
	return (0);
}
