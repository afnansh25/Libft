/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:19:20 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 14:00:51 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  i;
    unsigned const char   *str;
    unsigned char  letter;
    const char   *last;
    
    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    last = NULL;
    while (str[i])
    {
        if(str[i] == letter)
           last = (char *)(s + i);
        i++;
    }
    if (letter == '\0')
        return (char *)(s + i);
    return (char *)(last);
}
