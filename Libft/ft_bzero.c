/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:26:44 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/16 20:47:54 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t len)
{
	ft_memset(str, 0, len);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello";
	ft_bzero(str, 3);
	printf("%s", str);
	return (0);
}*/
