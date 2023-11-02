/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:15:24 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/23 09:31:32 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(char const *s, char c)
{
	size_t	wcount;

	if (!*s)
		return (0);
	wcount = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			wcount++;
		while (*s != c && *s)
			s++;
	}
	return (wcount);
}

static char	**ft_free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	w_len;
	size_t	i;

	split = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!s || !split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			w_len = ft_strchr(s, c) - s;
			if (!ft_strchr(s, c))
				w_len = ft_strlen(s);
			split[i++] = ft_substr(s, 0, w_len);
			if (!split[i - 1])
				return (ft_free_split(split));
			s += w_len;
		}
	}
	split[i] = NULL;
	return (split);
}
