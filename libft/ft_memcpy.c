/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 16:07:49 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 22:52:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned const char   *s;
    unsigned char   *d;
    size_t    i;
    
    if (!dest && !src)
        return (NULL);
    if (n == 0 || dest == src)
        return(dest); 
    s = (unsigned const char *)src;
    d = (unsigned char *)dest;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
