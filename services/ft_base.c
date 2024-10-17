/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:14:51 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/18 00:35:42 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_base(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_base(nb / 16, alpha);
	count += ft_put_c(alpha[nb % 16]);
	return (count);
}
