/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:45 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/18 00:30:39 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_s(char *str)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	if (str == NULL)
	{
		count += ft_put_s("(null)");
		return (count);
	}
	while (str[i])
	{
		count += ft_put_c(str[i]);
		i++;
	}
	return (count);
}
