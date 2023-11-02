/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:08:17 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/09 12:09:36 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = '0';
	if(ft_isdigit(c) != 0)
	{
		printf("El caracter '%c' es un dígito.", c);
	}
	else
	{
		printf("El caracter '%c' no es un dígito.", c);
	}
	return (0);
}*/
