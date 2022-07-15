#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>

#include "ft_strlcpy.c"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main () 
{
	char destination[5];
	unsigned int size = 10;
	char source[] = "bonjour je m'appelle Carolina et j'ai faim";
	//char *pointeur;
	
	//*pointeur = ft_strlcpy(destination, source, size);
	//printf("%s\n", pointeur);
	
	ft_strlcpy(destination, source, size);
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);
	
	strlcpy(destination, source, size); // neveut pas marcher
	//strcpy(destination, source); // qd taille destination < source ca fait de la merde
	//strncpy(destination, source, size); // qd taille destination < source ca copie ce que ca peut
	
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);
	
	return 0;
}