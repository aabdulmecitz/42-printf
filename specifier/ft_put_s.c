#include "../ft_printf.h"

int ft_put_s (char* str)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (str == NULL)
    {
        count += ft_put_s("(null)");
        return (count);
    }
    while (str[i])
    {
        count += ft_put_c(str[i]);
        i++;
    }    
	return (count);
}