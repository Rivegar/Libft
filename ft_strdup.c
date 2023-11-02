/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:12:41 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/17 14:45:24 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new_s)
		return (0);
	while (*s)
		new_s[i++] = *s++;
	new_s[i] = '\0';
	return (new_s);
}
