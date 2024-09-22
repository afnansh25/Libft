/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:28:41 by codespace         #+#    #+#             */
/*   Updated: 2024/09/22 11:06:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_lst;
    t_list  *new_node;

    if (!lst || !f)
        return (NULL);
    new_lst = NULL;
    while (lst)
    {
        new_node = malloc(sizeof (t_list));
        if (!new_node)
        {
            ft_lstclear(&new_lst, (*del));
            return (NULL);
        }
        new_node ->content = f(lst -> content);
        new_node ->next = NULL;
        ft_lstadd_back(&new_lst, new_node);
        lst = lst ->next;
    }
    return (new_lst);
}  