/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:06:25 by kali              #+#    #+#             */
/*   Updated: 2024/10/13 04:45:58 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_put_d_i(nb / 10);
		count += ft_put_d_i(nb % 10);
	}
	else if (nb <= 9)
		count = ft_put_c(nb + '0');
	if (count < 0)
		return (-1);
	return (count);
}
