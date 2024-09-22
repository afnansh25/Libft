/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:50:03 by codespace         #+#    #+#             */
/*   Updated: 2024/09/07 12:19:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  n_len(int n)
{
    size_t  count;

    count = (n <= 0)? 1 : 0;
    while (n)
    {
        n /= 10;
        count++;
    }
    return (count);
}

char    *ft_itoa(int n)
{
    char    *str;
    size_t  len;
    unsigned int    num;
    int is_negative;

    is_negative = (n < 0);
    len = n_len(n);
    str = (char *)malloc(sizeof (char) * len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    num = is_negative ? -n : n;
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
        if (len == 0 && is_negative)
            str[0] = '-';
    }
    return (str);
}
