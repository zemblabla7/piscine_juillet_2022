#include <stdio.h>
#include "ft_putstr_non_printable.c"

int main ()
{
	char string[] = "Coucou\ntu vas bien ?";
	
	char *pointeur = ft_putstr_non_printable(string);
	printf("%s\n", pointeur);
	
	return 0;
}
