int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c;
	c = 'Q';

	printf("Mayus: %d\n", isalpha(c));
	printf("Mayus: %d\n", ft_isalpha(c));

	c = 'q';
	printf("Minus: %d\n", isalpha(c));
	printf("Minus: %d\n", ft_isalpha(c));

	c = '+';
	printf("Non alphabet: %d\n", isalpha(c));
	printf("Non alphabet: %d\n", ft_isalpha(c));

	return 0;
}
*/
