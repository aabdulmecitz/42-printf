#include "../ft_printf.h"

int	ft_put_c(char c)
{
	int result = write(1, &c, 1);
	if (result == -1)
		return (-1);
	return (1);
}