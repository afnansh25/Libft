/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:23:44 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 13:58:59 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;

    p = (unsigned char *)s;
    while (n > 0)
    {
        *p = (unsigned char)c;
        p++;
        n--;
    }
    return (s);
}

