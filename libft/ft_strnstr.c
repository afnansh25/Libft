/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:41:38 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 14:00:41 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    unsigned const char *hay;
    unsigned const char *need;
    size_t  i;
    size_t  j;

    i = 0;
    hay = (unsigned const char *)haystack;
    need = (unsigned const char *)needle;
    if(need[i] == '\0')
        return (char *)haystack;
    while(i < n && hay[i])
    {
        j = 0;
            while (need[j] && ((i + j) < n))
            {
                if (hay[i + j] != need[j])
                    break;
                j++;
            } 
        if(need[j] == '\0')
            return (char *)(haystack + i);
        i++;
    }
    return (NULL);
}
