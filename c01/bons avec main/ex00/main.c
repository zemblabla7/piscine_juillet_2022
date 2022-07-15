#include <unistd.h>
#include "ft_ft.c"
#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <stdio.h>
#include <limits.h>

//void ft_ft(int *nbr);

int main () 
{
	// ft_ft
	int b;
	b = 0;
	int *pointeur;
	pointeur = &b;
	ft_ft(pointeur);
	printf("la valeur de b est %d\n", b); 

	return 0;
}
