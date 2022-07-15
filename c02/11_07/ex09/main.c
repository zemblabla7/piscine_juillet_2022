#include <stdio.h>
#include "ft_strcapitalize.c"

char *ft_strcapitalize(char *str);

int main ()
{
	char string[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *upped ;
	upped = ft_strcapitalize(string);
	printf("%s\n", upped);
	return 0;
}
