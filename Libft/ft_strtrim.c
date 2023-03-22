/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:52:02 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/22 09:21:12 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimstr;
	size_t	strt;
	size_t	end;

	if (!s1)
		return (NULL);
	strt = 0;
	end = ft_strlen(s1) - 1;
	while (s1[strt] && ft_strchr(set, s1[strt]))
		strt++;
	if (ft_strlen(s1) <= strt)
		return ((char *)ft_calloc(sizeof(char), 1));
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	trimstr = ft_substr(s1, strt, end - strt + 1);
	return (trimstr);
}
