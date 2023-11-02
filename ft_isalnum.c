/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:02:27 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/09 12:14:47 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = '&';
	if(ft_isalnum(c) != 0)
	{
		printf("El caracter '%c' es alfanumérico.", c);
	}
	else
	{
		printf("El caracter '%c' no es alfanumérico.", c);
	}
	return (0);
}*/
