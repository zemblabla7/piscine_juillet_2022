#include <stdio.h>
#include <string.h>
#include "ft_strstr.c"

int main ()
{
    char string[100] = "bocata patatas comida";
    char mot_recherche[] = "patata";
    printf("%s\n", ft_strstr(string, mot_recherche));
    printf("%s", strstr(string, mot_recherche));
    return (0);
}
