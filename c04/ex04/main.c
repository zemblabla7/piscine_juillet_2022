#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_putnbr_base.c"

int main () 
{
    int nb = 95876;
    //int nb = 0;

    char base_binaire[] = "01"; // ou 01
    char base_hexadecimale[] = "0123456789ABCDEF";
    char base_octale[] = "poneyvif";
    char base_decimale[] = "0123456789";

    printf("%d : ", nb);
    fflush(stdout);
    ft_putnbr_base(nb, base_binaire);
    printf("\n");
    fflush(stdout);
    printf("%d : ", nb);
    fflush(stdout);
    ft_putnbr_base(nb, base_hexadecimale);
    printf("\n");
    fflush(stdout);
    printf("%d : ", nb);
    fflush(stdout);
    ft_putnbr_base(nb, base_octale);
    printf("\n");
    fflush(stdout);
    printf("%d : ", nb);
    fflush(stdout);
    ft_putnbr_base(nb, base_decimale);
    printf("\n");
    fflush(stdout);

    return 0;
}