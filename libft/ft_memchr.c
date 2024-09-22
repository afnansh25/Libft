/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:17:55 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 23:11:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned const char *str;
    unsigned char   letter;
    size_t  i;

    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    if (n == 0)
        return (NULL);
    while (i < n)
    {
        if (str[i] == letter)
            return ((void *)(s + i));
        i++;
    }
    return (NULL);
}
