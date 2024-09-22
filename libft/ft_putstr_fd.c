/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:54:57 by codespace         #+#    #+#             */
/*   Updated: 2024/09/07 13:57:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
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
}