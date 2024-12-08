int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char A;
	A = 'A';
	printf("%c", ft_tolower(A));
	printf("%c", tolower(A));
	return 0;
}
*/
