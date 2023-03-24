/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 15:19:48 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/24 15:47:57 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*alt;

	alt = (t_list *)malloc(sizeof(*alt));
	if (!alt)
		return (NULL);
	alt->content = content;
	alt->next = NULL;
	return (alt);
}
