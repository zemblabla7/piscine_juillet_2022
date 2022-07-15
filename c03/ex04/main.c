#include <stdio.h>
#include "ft_strstr.c"

int main ()
{
    char string[100] = "bo ca ta";
    char mot_recherche[] = "ca";
    printf("%s", ft_strstr(string, mot_recherche));
    return (0);
}