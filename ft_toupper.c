int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a;
	a = 'a';
	printf("%c", ft_toupper(a));
	printf("%c", toupper(a));
	return 0;
}
*/
