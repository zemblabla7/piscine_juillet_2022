#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_ultimate_ft.c"
#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <limits.h>

void 	ft_ft(int *nbr);
void	ft_int(void);
void	ft_putnbr(int nb);

int main () 
{
	int nbr;
	int	*p;
	int **p2;
	int ***p3;
	int ****p4;
	int *****p5;
	int ******p6;
	int *******p7;
	int ********p8;
	int *********p9;
	p = &nbr;
	p2 = &p;
	p3 = &p2;
	p4 = &p3;
	p5 = &p4;
	p6 = &p5;
	p7 = &p6;
	p8 = &p7;
	p9 = &p8;
	
	ft_ultimate_ft (p9);
	printf("nbr = %d\n", nbr);
	return 0;
}
