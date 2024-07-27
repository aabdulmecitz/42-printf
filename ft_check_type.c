/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:34:46 by marvin            #+#    #+#             */
/*   Updated: 2024/07/27 23:34:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_type(const char type, va_list args)
{
    int count;

    count = 0;
    if (type == 'c')
		count += (char)ft_put_c(va_arg(args, int));
	if (type == 's')
		count += ft_put_s(va_arg(args, char *));
	if (type == 'd' || type == 'i')
		count += ft_put_d_i(va_arg(args, int));
	if (type == 'p')
		count += ft_put_p(va_arg(args, void *));
	if (type == 'u')
		count += ft_put_u(va_arg(args, unsigned int));
	if (type == 'X' || type == 'x')
		count += (char)ft_put_x(va_arg(args, int), type);
	if (type == '%')
		return (write(1, "%", 1));
	return (count);
}

