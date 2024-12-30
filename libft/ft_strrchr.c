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

char    *ft_strrchr(const char *s, int c)
{
    unsigned const char	*str;
	unsigned char	letter;
	size_t			i;

	str = (unsigned const char *)s;
	letter = (unsigned char)c;
	i = ft_strlen(s);
	if(letter == '\0')
		return ((char *)(s + i));
	while (i >= 0)
	{
		if (str[i] == letter)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}