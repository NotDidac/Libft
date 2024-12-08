int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	c = '7';

	printf("Number: %d\n", isdigit(c));
	printf("Number: %d\n", ft_isdigit(c));

	c = '0';
	printf("ZERO: %d\n", isdigit(c));
	printf("ZERO: %d\n", ft_isdigit(c));

	c = '+';
	printf("Non alphabet: %d\n", isdigit(c));
	printf("Non alphabet: %d\n", ft_isdigit(c));

	return 0;
}
*/
