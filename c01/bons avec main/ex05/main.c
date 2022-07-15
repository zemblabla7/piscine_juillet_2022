#ifdef linux
# include <bsd/string.h> // with -lbsd
#endif
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "ft_putstr.c"


int main ()
{

//ft_putstr
    char str[] = "coucou";
    ft_putstr(str);

}
