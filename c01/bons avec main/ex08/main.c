#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <stdio.h>
#include <limits.h>

#include "ft_sort_int_tab.c"

int main ()
{


//ft_sort_int_tab
	int tab[5] = {4, 9, 2, 6, 0};
	ft_sort_int_tab(tab, 5);
	printf("%d%d%d%d%d\n", tab[0], tab[1], tab[2], tab[3], tab [4]);

}
