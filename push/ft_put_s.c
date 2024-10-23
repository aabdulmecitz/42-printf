/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:44 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/23 19:19:47 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

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
