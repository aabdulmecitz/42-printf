/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 20:35:00 by kali              #+#    #+#             */
/*   Updated: 2024/08/05 20:47:38 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_d_i(int nb)
{
    int count;

    count = 0;
    if (nb == -2147483648)
    {
        write (1, "-2147483648", 11);
    	count = 11;
    }
    else if (nb < 0)
    {
	    count += ft_put_c('-');
	    count += ft_put_d_i(-nb);
    }
    else if (nb > 0)
    {
	    count += ft_put_d_i(nb / 10);
	    count += ft_put_d_i(nb % 10);
    }
    else
	    count += ft_put_c(nb + '0');
    if (count < 0)
	    return (-1);
    return (count);
}