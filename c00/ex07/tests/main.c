#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "ft_putnbr.c"

void ft_putnbr(unsigned int nb);
void ft_putchar(char c);

int main () 
{
    ft_putnbr(-42);
    return 0;
}
