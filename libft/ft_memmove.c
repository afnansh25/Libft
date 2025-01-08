/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:07:31 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 13:58:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned const char   *s;
    unsigned char   *d;
    size_t    i;

    if (!dest && !src)
		return (NULL);
    s = (unsigned const char *)src;
    d = (unsigned char *)dest;
    i = 0;
    if (d > s)
    {
        while (n-- > 0)
            d[n] = s[n];
    } 
    else
    {
        while (i < n) 
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
