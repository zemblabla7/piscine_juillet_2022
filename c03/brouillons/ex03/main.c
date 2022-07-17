#include <stdio.h>
#include "ft_strncat.c"

int main ()
{
    char destination[100] = "hola ";
    char source[] = "carolina";
    unsigned int size = 4;
    printf("%s", ft_strncat(destination, source, size));
    return (0);
}