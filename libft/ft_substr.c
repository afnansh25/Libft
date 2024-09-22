/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:20:47 by codespace         #+#    #+#             */
/*   Updated: 2024/09/07 11:40:21 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sstr;
    size_t i;
    
    i = 0;
    if (!s)
        return (NULL);
    if (ft_strlen(s) < start)
        len = 0;
    if (ft_strlen(s) - start < len)
        len = ft_strlen(s) - start;
    sstr = (char *)malloc(sizeof (char) * len + 1);
    if(!sstr)
        return (NULL);
    while (i < len)
    {
        sstr[i++] = s[start++];
    }
    sstr[i] = '\0';
    return (char *)sstr; 
}
