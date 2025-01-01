/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:07:38 by codespace         #+#    #+#             */
/*   Updated: 2024/09/22 14:49:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  count_words(char const *s, char c)
{
    size_t  in_word;
    size_t  count;
    size_t  i;

    in_word = 0;
    count = 0;
    i = 0;
    while(s[i])
    {
        if(s[i] != c && !in_word)
        {
            count++;
            in_word = 1;
        }
        else if (s[i] == c)
            in_word = 0;
        i++;
    }
    return (count);
}

void    *free_split(char **split, size_t k)
{
    size_t  i;
    
    i = 0;
    while (i < k)
    {
        free(split[i]);
        i++;
    }
    free(split);
    return (NULL);
}

size_t word_start(char const *s, char c, size_t i)
{
    while (s[i] == c && s[i])
        i++;
    return (i);
}

char    **strsplit(char **split, char *s, char c)
{
    size_t  i;
    size_t  k;
    size_t  start;

    start = 0;
    i = 0;
    k = 0;
    while (s[i])
    {
        start = word_start(s, c, i);
        i = start;
        while (s[i] != c && s[i])
            i++;
        if (i > start)
        {
            split[k] = ft_substr(s, start, i - start);
            if(!split[k])
                return (free_split(split, k));
            k++;
        }
        start = i;
    }
    split[k] = NULL;
    return (split);
}

char    **ft_split(char const *s, char c)
{
    char    **split;

    if (s == NULL)
        return (NULL);
    split = (char **)malloc(sizeof (char *) * (count_words(s, c) + 1));
    if(!split)
        return (NULL);
    strsplit(split, (char *)s, c);
    return (split);
}
