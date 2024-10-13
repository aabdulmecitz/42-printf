/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:29:39 by kali              #+#    #+#             */
/*   Updated: 2024/10/13 04:45:51 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_p(void *arg)
{
	int				count;
	unsigned long	adress;
	char			*alpha;

	alpha = "0123456789abcdef";
	adress = (unsigned long) arg;
	count = 0;
	count += ft_put_s("0x");
	count += ft_base16(adress, alpha);
	return (count);
}
