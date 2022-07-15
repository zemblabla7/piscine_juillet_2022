#include <bsd/string.h> // ne pas oublier de compiler vec -lbsd!!
#include <stdio.h>
#include <stdlib.h>

//#include "ft_strlcat.c"

int main ()
{
    char string1[] = "holaguapa";
    char string2[] = "tengohambre";
    unsigned int size = 30;
    //printf("%s", ft_strlcat(string1, string2, size));
    //printf("%d", strlcat(string1, string2, size));

    strlcat(string1, string2, size);
    printf("%s", string1);
    return (0);
}