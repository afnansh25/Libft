/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:55:49 by codespace         #+#    #+#             */
/*   Updated: 2024/09/22 11:12:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int ft_atoi(const char *str)
{
    size_t  i;
    int sign;
    unsigned long result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)  
            sign *= -1;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        result = 10 * result + (str[i] - 48);
        if (sign == -1 && result >= LLONG_MAX)
			return (0);
		if (result >= LLONG_MAX)
			return (-1);
        i++;
    }
    return (result * sign);
}

