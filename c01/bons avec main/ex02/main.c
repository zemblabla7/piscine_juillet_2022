#include <stdio.h>
#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <limits.h>

#include "ft_swap.c"


int main ()
{


 int  	d;
 int 	e;
 int	*a;
 int	*b;
 d = 1337;
 e = 42;
 a = &d;
 b = &e;
printf("avant swap d = %d\n", *a);
printf("avant swap e = %d\n", *b);
ft_swap(a, b);
printf("apres swap d = %d\n", *a);
printf("apres swap e = %d\n", *b);

}
