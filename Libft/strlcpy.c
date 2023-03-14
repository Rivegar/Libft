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

size_t ft_strlcpy(char *dest, const char *src, size_t dsize)
{
    size_t i;

    i = 0;

    if(dsize > 0)
    {
        while (src[i] && i < (dsize - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return(ft_strlen(src));
}
