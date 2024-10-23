/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aozkaya <aozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:15:15 by aabdulmecit       #+#    #+#             */
/*   Updated: 2024/10/23 14:34:30 by aozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_check_type(const char type, va_list args);
int	ft_base(unsigned long nb, char *alpha);
int	ft_put_c(char c);
int	ft_put_d_i(int nb);
int	ft_put_p(void *arg);
int	ft_put_s(char *str);
int	ft_put_u(unsigned int nb);
int	ft_put_x(unsigned int nb, int type);

#endif