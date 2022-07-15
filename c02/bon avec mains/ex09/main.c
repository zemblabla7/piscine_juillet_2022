#include <stdio.h>
#include <stdlib.h>
#include "ft_strcapitalize.c"

char *ft_strcapitalize(char *str);

int main ()
{
	char string[] = "salut, comment tu vas ? 42mots quARAnte-deux; Cinquante+et+un. 27HolAs";
	char *pointeur = ft_strcapitalize(string);
	printf("%s\n", pointeur);
	return 0;
}
