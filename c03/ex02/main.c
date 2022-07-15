#include <stdio.h>
#include "ft_strcat.c"

int main ()
{
    char destination[100] = "hola ";
    char source[] = "carolina";
    printf("%s", ft_strcat(destination, source));
    return (0);
}