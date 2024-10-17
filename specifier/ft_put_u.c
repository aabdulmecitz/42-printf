/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:50 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/18 00:32:37 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
