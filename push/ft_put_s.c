/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:45 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/23 14:29:23 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
