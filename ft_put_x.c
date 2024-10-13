/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:16:44 by kali              #+#    #+#             */
/*   Updated: 2024/10/13 04:46:01 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned int nb, int type)
{
	char	*alpha;

	if (type == 'X')
		alpha = "0123456789ABCDEF";
	else
		alpha = "0123456789abcdef";
	return (ft_base16(nb, alpha));
}

int	ft_base16(unsigned long nb, char *alpha)
{
	int	count;

	count = 1;
	if (nb > 15)
	{
		count += ft_base16(nb / 16, alpha);
		count += ft_base16(nb % 16, alpha);
	}
	else
		count += ft_put_c(alpha[nb]);
	if (count < 0)
		return (-1);
	return (count);
}
