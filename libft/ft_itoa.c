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

int ft_int_len(int nbr)
{
	int i = 0;
    if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char *str;
	unsigned int num;
	unsigned int len;

	if(n == -2147483648)
        return (ft_strdup("-2147483648"));
	len = ft_int_len(n);
	num = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	while (num != 0)
	{
		str[--len] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}
