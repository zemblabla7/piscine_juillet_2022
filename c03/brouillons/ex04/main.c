#include <stdio.h>
#include "ft_strstr.c"
#include <string.h>

int main ()
{
    char string[100] = "bo ca ta";
    char mot_recherche[] = "co";
    printf("%s", ft_strstr(string, mot_recherche));
    //printf("%s", strstr(string, mot_recherche));
    return (0);
}