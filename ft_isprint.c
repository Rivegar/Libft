/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:09:07 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/10 12:31:50 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = '&';
	if(ft_isprint(c) != 0)
	{
		printf("El caracter '%c' es imprimible.", c);
	}
	else
	{
		printf("El caracter '%c' no es imprimible.", c);
	}
	return (0);
}*/
