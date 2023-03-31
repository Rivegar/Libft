/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:55:15 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/29 12:36:18 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	int c = 'A';
	if(ft_isalpha(c) != 0)
	{
		printf("El caracter '%c' es una letra del alfabeto.", c);
	}
	else
	{
		printf("El caracter '%c' no es una letra del alfabeto." , c);
	}
	return (0);
}*/
