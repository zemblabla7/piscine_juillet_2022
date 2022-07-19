#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_atoi_base.c"

int main (int argc, char **argv) 
{
    //char base_binaire[] = "01";
    //char base_hexadecimale[] = "0123456789ABCDEF";
    //char base_octale[] = "poneyvif";
    char base_decimale[] = "0123456789";
    int nb;

    if (argc < 2)
        return 0;
    else
    {
        nb = ft_atoi_base(argv[1], base_decimale);
        printf("%d", nb);
        fflush(stdout);
        /*
        //printf("%d : ", argv[1]);
        fflush(stdout);
        printf("%d : ", ft_atoi_base(argv[1], base_binaire));
        printf("\n");
        fflush(stdout);
        //printf("%d : ", argv[1]);
        fflush(stdout);
        printf("%d : ", ft_atoi_base(argv[1], base_hexadecimale));
        printf("\n");
        fflush(stdout);
        //printf("%d : ", argv[1]);
        fflush(stdout);
        printf("%d : ", ft_atoi_base(argv[1], base_octale));
        printf("\n");
        fflush(stdout);
        //printf("%d : ", argv[1]);
        fflush(stdout);
        printf("%d : ", ft_atoi_base(argv[1], base_decimale));
        printf("\n");
        fflush(stdout);
        */
    }

    return 0;
}