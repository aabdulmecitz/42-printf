#include "../ft_printf.h"

int ft_base(unsigned long nb, char *alpha)
{
    int count = 0;
    if (nb >= 16)
    {
        count += ft_base(nb / 16, alpha);
    }
    count += ft_put_c(alpha[nb % 16]);
    return (count);
}