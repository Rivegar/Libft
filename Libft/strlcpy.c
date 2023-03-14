/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arivero- <arivero-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:07:24 by arivero-          #+#    #+#             */
/*   Updated: 2023/03/14 09:07:24 by arivero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
    size_t i;

    i = 0;

    while(i + 1 < dstsize && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (i < dstsize)
    {
        dest[i] = '\0';
    }
    while(src[i] != 0)
    {
        i++;
    }
    return i;
}
