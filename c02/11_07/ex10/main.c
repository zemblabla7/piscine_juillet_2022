#include <string.h>
#include <stdio.h>

//#include "ft_strlcpy.c"

int main () 
{
	char destination[5];
	int size = 5;
	char source[] = "bonjour je m'appelle Carolina et j'ai faim";
	//char *pointeur = ft_strlcpy(destination, source, size);
	//printf("%s\n", pointeur);
	
	strlcpy(destination, source, size);
	printf("%s", destination);
	
	return 0;
}
