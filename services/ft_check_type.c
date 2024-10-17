#include "../ft_printf.h"

int ft_check_type(const char type, va_list args)
{
    int count;

    count = 0;
    if (type == 'c')
        count += (char)ft_put_c(va_arg(args, int));
    if (type == 'i' || type == 'd')
        count += ft_put_d_i(va_arg(args, int));
    if (type == 's')
        count += ft_put_s(va_arg(args, char *));
    if (type == 'p')
        count += ft_put_c(va_arg(args, int));
    if (type == 'c')
        count += (char)ft_put_c(va_arg(args, int));
    return (count); 
}