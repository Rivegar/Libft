/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 09:25:53 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/16 10:05:33 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	altc;
	char	*altstr;
	size_t	i;

	altc = c;
	altstr = (char *)str;
	i = 0;
	while (altstr[i] != altc)
	{
		if (altstr[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (&altstr[i]);
}
