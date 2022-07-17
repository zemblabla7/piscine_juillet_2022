#include <stdio.h>
#include <string.h>
#include "ft_strncmp.c"

int main ()
{
    char string1[] = "covvou";
    char string2[] = "cova perra";
    unsigned int size = 3;
    printf("%d", ft_strncmp(string1, string2, size));
    //printf("%d", strncmp(string1, string2, size));
    return (0);
}