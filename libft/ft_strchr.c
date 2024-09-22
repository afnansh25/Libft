/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:18:47 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 13:59:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;
    unsigned const char *str;
    unsigned char   letter;

    i = 0;
    str = (unsigned const char *)s;
    letter = (unsigned char)c;
    while (str[i])
    {
        if (str[i] == letter)
            return (char *)(s + i);
        i++;
    }
    if (letter == '\0')
        return (char *)(s + i);
    return (NULL);
}
