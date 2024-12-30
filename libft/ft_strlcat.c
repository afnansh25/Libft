/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:20:05 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 21:45:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  srclen;
    size_t  dstlen;
    size_t  i;

    srclen = ft_strlen(src);
    dstlen = ft_strlen(dst);
    if (size <= dstlen)
        return(srclen + size);
    i = 0;
    while(i + dstlen < size - 1 && src[i])
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[dstlen + i] = '\0';
    return(dstlen + srclen);
}