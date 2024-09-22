/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:39:43 by codespace         #+#    #+#             */
/*   Updated: 2024/08/25 13:53:02 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    size_t  len;
    size_t  i;
    char    *dup;
    
    i = 0;
    len = ft_strlen(s);
    dup = (char *)malloc(sizeof(char) * len + 1);
    if (!dup)
        return (NULL);
    ft_strlcpy(dup, s, len + 1);
    return (dup);
}

