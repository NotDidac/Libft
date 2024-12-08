int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char c = argv[1][0];

		printf("isascii: %d\n", isascii(c));
		printf("ft_isascii: %d\n", isascii(c));

		return 0;
	}
	else
		printf("Introduce un caracter\n");
}
*/
