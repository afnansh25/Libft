/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:01:03 by codespace         #+#    #+#             */
/*   Updated: 2024/09/07 14:03:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    size_t  i;
    
    if (s == NULL)
        return;
    i = 0;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
    write (fd, "\n", 1);
}