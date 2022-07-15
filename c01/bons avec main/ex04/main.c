#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <stdio.h>
#include <limits.h>


#include "ft_ultimate_div_mod.c"


int main ()
{


//ft_utlimate_div_mod
    int c;
	int d;
	int *a;
	int *b;
	
	c = 14;
	d = 2;
	a = &c;
	b = &d;
printf("Valeur de a avant fonction = %d\n", *a);
printf("Valeur de b avant fonction = %d\n", *b);
	
	ft_ultimate_div_mod(a, b);
printf("Valeur de a apres fonction = %d\n", *a);
printf("Valeur de b apres fonction = %d\n", *b);


}
