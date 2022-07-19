#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_putnbr_base.c"

int main () 
{
    int nb = 95876;

    char base_binaire[] = "01";
    char base_hexadecimale[] = "0123456789ABCDEF";
    char base_octale[] = "poneyvif";
    char base_decimale[] = "0123456789";

    ft_putnbr_base(nb, base_binaire);
    printf("%d\n", nb);
    ft_putnbr_base(nb, base_hexadecimale);
    printf("%d\n", nb);
    ft_putnbr_base(nb, base_octale);
    printf("%d\n", nb);
    ft_putnbr_base(nb, base_decimale);
    printf("%d\n", nb);

    return 0;
}