#include <stdio.h>
#include "ft_strstr.c"
#include <string.h>

int main ()
{
    char string[100] = "bocata patatas comida";
    char mot_recherche[] = "gwyubweoco pata fkkwiiw patatas fheosfh";
    printf("%s", ft_strstr(string, mot_recherche));
    //printf("%s", strstr(string, mot_recherche));
    return (0);
}
