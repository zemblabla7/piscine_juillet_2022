#include <stdio.h>
#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <limits.h>

#include "ft_div_mod.c"


int main ()
{

//ft_div_mod
	int a;
	int b;
	int	*div;
	int	*mod;
		
	a = 1337;
	b = 42;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("Le produit de la division est %d\n", *div);
	printf("la retenue de la division est %d\n", *mod);




}
