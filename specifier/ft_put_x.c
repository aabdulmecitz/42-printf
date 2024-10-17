/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:55 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/18 00:21:37 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_put_x(unsigned int nb, int type)
{
	char	*alpha;

	if (type == 'X')
		alpha = "0123456789ABCDEF";
	else
		alpha = "0123456789abcdef";
	return (ft_base(nb, alpha));
}
