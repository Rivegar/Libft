/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:15:24 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/22 16:24:46 by arivero-         ###   ########.fr       */
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

void	ft_free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	w_len;
	size_t	i;

	if (!s)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				w_len = ft_strlen(s);
			else
				w_len = ft_strchr(s, c) - s;
			split[i++] = ft_substr(s, 0, w_len);
			if (!split[i - 1])
			{
				ft_free_split(split);
				return (NULL);
			}
			s += w_len;
		}
	}
	split[i] = NULL;
	return (split);
}
