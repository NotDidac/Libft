#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("strlen    = %lu\n", strlen(argv[1]));
		printf("ft_strlen = %lu\n", ft_strlen(argv[1]));
	}
	else
		printf("Introduce una string, para que la podamos contar y comparar!\n");
}
*/
