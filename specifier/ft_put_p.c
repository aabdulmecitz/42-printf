/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:40 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/18 00:28:04 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_p(void *arg)
{
	int				count;
	unsigned long	adress;
	char			*alpha;

	alpha = "0123456789abcdef";
	adress = (unsigned long)arg;
	count = 0;
	count += ft_put_s("0x");
	count += ft_base(adress, alpha);
	return (count);
}
