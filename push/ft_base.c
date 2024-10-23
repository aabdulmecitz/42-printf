/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:15:18 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/23 14:26:19 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_base(unsigned long nb, char *alpha)
{
	int	count;

	count = 0;
	if (nb >= 16)
		count += ft_base(nb / 16, alpha);
	count += ft_put_c(alpha[nb % 16]);
	return (count);
}
