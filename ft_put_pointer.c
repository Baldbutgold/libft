#include "libft.h"

int	ft_put_pointer(unsigned long pointer)
{
	int	count;

	if (!pointer)
		return (ft_putstr("(nil)"));
	count = 2;
	ft_putstr("0x");
	count += ft_treat_pointer(pointer);
	return (count);
}
