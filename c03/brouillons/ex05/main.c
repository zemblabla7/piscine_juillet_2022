#include <bsd/string.h> // ne pas oublier de compiler vec -lbsd!!
#include <stdio.h>
#include <stdlib.h>

#include "ft_strlcat.c"

int main ()
{
    char string1[100] = "hola guapa ";
    char string2[] = "tengo hambre";
    unsigned int size = 15;
    ft_strlcat(string1, string2, size);
    printf("%s\n", string1);
    printf("%u", ft_strlcat(string1, string2, size));

    //printf("%ld", strlcat(string1, string2, size));
    //strlcat(string1, string2, size);
    //printf("%s", string1);
    return (0);
}