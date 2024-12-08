#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (ft_isalpha(uc) || ft_isdigit(uc))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c;
	c = '8';

	printf("Number: %d\n", isalnum(c));
	printf("Number: %d\n", ft_isalnum(c));

	c = 'H';
	printf("Cap: %d\n", isalnum(c));
	printf("Cap: %d\n", ft_isalnum(c));

	c = '+';
	printf("Non alphabet: %d\n", isalnum(c));
	printf("Non alphabet: %d\n", ft_isalnum(c));

	return 0;
}
*/
