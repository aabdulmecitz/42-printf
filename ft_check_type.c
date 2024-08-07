/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdulmecitz <aabdulmecitz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:05:25 by kali              #+#    #+#             */
/*   Updated: 2024/08/07 04:28:34 by aabdulmecit      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_type(const char type, va_list args)
{
	int	count;

	count = 0;
	if (type == 'c')
		count += (char)ft_put_c(va_arg(args, int));
	if (type == 'i' || type == 'd')
		count += ft_put_d_i(va_arg(args, int));
	if (type == 's')
		count += ft_put_s(va_arg(args, char *));
	if (type == 'u')
		count += ft_put_u(va_arg(args, unsigned int));
	if (type == 'p')
		count += ft_put_p(va_arg(args, void *));
	if (type == 'x' || type == 'x')
		count += (char)ft_put_x(va_arg(args, int), type);
	if (type == '%')
		return (write(1, "%", 1));
	return (count);
}
