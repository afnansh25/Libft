/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:22:32 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 23:54:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    unsigned const char   *st1;
    unsigned const char   *st2;
    
    i = 0;
    st1 = (unsigned const char *)s1;
    st2 = (unsigned const char *)s2;
    while (i < n && st1[i] && st2[i])
    {
        if (st1[i] != st2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        i++;
    } 
    return (0);
}
