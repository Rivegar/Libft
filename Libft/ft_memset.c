/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:23:47 by arivero-          #+#    #+#             */
/*   Updated: 2023/04/02 20:01:58 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = str;
	while (i < len)
	{
		s[i] = (unsigned char) c;
		++i;
	}
	return (str);
}

/*int main()
{
	char str[50] = "Hola";
	printf("\nAntes de memset(): %s\n", str);
	ft_memset(str + 2, 'x', 2);
	printf("Después de memset):  %s", str);
	return (0);
}*/
