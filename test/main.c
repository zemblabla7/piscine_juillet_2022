#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <stdio.h>
#include <limits.h>

#include "ft_strlen.c"
#include "ft_strlen2.c"

int main ()
{

// ft_strlen
   	char str[] = "coucou";
	printf("%d\n", ft_strlen(str));
	printf("%d\n", ft_strlen2(str));

}
