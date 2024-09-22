/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:41:02 by codespace         #+#    #+#             */
/*   Updated: 2024/09/21 23:37:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;
    
    if (!lst || !new)
        return;
    if (!*lst)
    {
        *lst = new;
        return;
    } 
    last = *lst;
    while (last ->next != NULL)
        last = last ->next;
    last ->next = new;
}