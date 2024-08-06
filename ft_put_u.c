/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kali <kali@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 21:06:25 by kali              #+#    #+#             */
/*   Updated: 2024/08/05 21:12:05 by kali             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int nb)
{
    int count;
    
    count = 0;
    if (nb > 9)
    {
        count += ft_put_d_i(nb / 10);
        count += ft_put_d_i(nb % 10);
    }
    else if (nb <= 9 && nb >= 0)
        count = ft_put_c(nb + '0');
    if (count < 0)
        return (-1);
    return (count);
}