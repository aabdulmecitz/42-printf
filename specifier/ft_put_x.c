#include "../ft_printf.h"

int	ft_put_x(unsigned int nb, int type)
{
	char	*alpha;
	if (type == 'X')
		alpha = "0123456789ABCDEF";
	else
		alpha = "0123456789abcdef";
	return (ft_base(nb, alpha));
}
