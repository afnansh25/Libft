/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 09:58:04 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 20:52:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *trim;
    size_t  start;
    size_t  end;
    size_t  lentrim;
    size_t  i;

    if(!s1 || !set)
        return (NULL);
    start = 0;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    end = ft_strlen(s1);
    while (end > start && ft_strchr(set, s1[end - 1]))
        end--;
    lentrim = end - start;
    trim = (char *)malloc(sizeof (char) * lentrim + 1);
    if(!trim)
        return (NULL);
    i = 0;
    while (start < end)
        trim[i++] = s1[start++];
    trim[i] = '\0';
    return (char *)trim;
}
