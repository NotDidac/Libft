int	ft_isprint(int c)
{
	unsigned int	uc;

	uc = (unsigned int)c;
	if (uc >= ' ' && uc <= '~')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("isprint    = %d\n", isprint(argv[1][0]));
		printf("ft_isprint = %d\n", ft_isprint(argv[1][0]));
	}
	else
		printf("Introduce un char\n");
}
*/
