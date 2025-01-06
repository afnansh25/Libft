/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:58:31 by codespace         #+#    #+#             */
/*   Updated: 2024/09/22 11:01:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
    
	if (lst == NULL || *lst == NULL)
		return;
	while (*lst != NULL)
	{
		temp = (*lst) -> next;
		del((*lst) -> content);
		free(*lst);
		*lst = temp;
	}
	free (*lst);
	*lst = NULL;
}