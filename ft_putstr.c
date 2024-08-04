/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:19:00 by marvin            #+#    #+#             */
/*   Updated: 2024/07/27 14:19:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str) 
{
    if (*str)
		return (write(1, "(null)", 6));
    
    int count;

    count = 0;
    while (str[count])
	{
		write (1, &str[count], 1);
		count++;
	}
	if (count < 0)
		return (-1);
}