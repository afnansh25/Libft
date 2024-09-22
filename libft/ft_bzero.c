/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:52:50 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 13:57:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *p;
    
    p = (unsigned char *)s;
    while (n > 0)
    {
        *p = '\0';
        p++;
        n--;
    }
}