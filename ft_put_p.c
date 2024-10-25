/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 19:19:40 by aozkaya           #+#    #+#             */
/*   Updated: 2024/10/23 19:19:41 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
