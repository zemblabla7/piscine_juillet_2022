#include <stdio.h>
#include "ft_strupcase.c"

char	*ft_strupcase(char *str);

int main ()
{
	char string[] = "bonjour";
	char *upped ;
	upped = ft_strupcase(string);
	printf("%s\n", upped);
	return 0;
}
