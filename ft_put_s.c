/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:23:01 by kali              #+#    #+#             */
/*   Updated: 2024/10/13 07:25:41 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_s(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	if (str == NULL)
	{
		count += ft_put_s("(null)");
		return count;
	}
	while (str[i])
	{
		count += ft_put_c(str[i]);
		i++;
	}
	return (count);
}
