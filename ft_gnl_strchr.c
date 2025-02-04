#include "libft.h"

int	ft_gnl_strchr(char *s, int c)
{
	size_t	i;

	i = 0;
	while (i <= ft_strlen(s))
	{
		if ((unsigned char)s[i] == c)
			return (i);
		i++;
	}
	return (-1);
}
