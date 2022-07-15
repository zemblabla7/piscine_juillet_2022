#include <string.h>
#include <stdio.h>

#include "ft_str_is_alpha.c"

int	ft_str_is_alpha(char *str);

int main () 
{
	char source[] = "bonjour je m'appelle Carolina et j'ai faim";
	char *pointeur = ft_str_is_alpha(source);
	printf("%s\n", pointeur);
	
	return 0;
}
