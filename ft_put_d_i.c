/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:35 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/23 19:19:36 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_put_d_i(int nb)
{
	int	count;

	count = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		count += ft_put_c('-');
		nb = -nb;
	}
	if (nb == 0)
		return (count += ft_put_c(nb + '0'));
	if (nb > 9)
		count += ft_put_d_i(nb / 10);
	count += ft_put_c((nb % 10) + '0');
	return (count);
}
