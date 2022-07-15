#include <string.h>
#include <stdio.h>

#include "ft_strncpy.c"
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int main () 
{
	char destination[100];
	int size = 30;
	char source[] = "bonjour je m'appelle Carolina et j'ai faim";
	/*char *pointeur = ft_strncpy(destination, source, size);
	printf("ft_strncpy : %s\n", pointeur);*/
	
	/*destination[5];
	size = 5;
	char source1[] = "bonjour je m'appelle Carolina et j'ai faim";
	strncpy(destination, source, size);
	printf("strncpy : %s\n", destination);*/

	ft_strncpy(destination, source, size);
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);

	strncpy(destination, source, size);
	printf("destination : %s\n", destination);
	printf("source : %s\n", source);
	
	return 0;
}