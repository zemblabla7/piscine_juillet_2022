#include <string.h>
#include <stdio.h>

#include "ft_strcpy.c"
char	*ft_strcpy(char *dest, char *src);
int main ()
{
	char destination[100]= "dd";
	char source[] = "bonjour je m'appelle Carolina et j'ai faim";
	//char *pointeur = ft_strcpy(destination, source);
	//rintf("%s\n", pointeur);
	ft_strcpy(destination, source);
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);

	strcpy(destination, source);
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);
	
	return 0;
}
