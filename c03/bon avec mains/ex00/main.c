#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int main ()
{
    char string1[] = "coucou";
    char string2[] = "dola MATHIEU";
    printf("%d", ft_strcmp(string1, string2));
    //strcmp(string1, string2);
    //printf("%d", strcmp(string1, string2));

    return (0);
}