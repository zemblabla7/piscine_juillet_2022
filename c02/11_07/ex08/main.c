#include <stdio.h>
#include "ft_strlowcase.c"

//char	*ft_strlowcase(char *str);

int main ()
{
	char string[] = "BONJOUR";
	char *upped ;
	upped = ft_strlowcase(string);
	printf("%s\n", upped);
	return 0;
}
