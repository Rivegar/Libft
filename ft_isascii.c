/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:16:22 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/09 13:07:51 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = '&';
	if(ft_isascii(c) != 0)
	{
		printf("El caracter '%c' es ascii.", c);
	}
	else
	{
		printf("El caracter '%c' no es ascii.", c);
	}
	return (0);
}*/
