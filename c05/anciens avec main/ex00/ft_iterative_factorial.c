int ft_iterative_factorial(int nb)
{
    int i;
    int j;

    if (nb == 0)
        return (0);
    i = 1;
    j = 1;
    while (i <= nb)
    {
        j = j * i;
        i++;
    }
    return (j);
}
#include <stdio.h>

int main () 
{
    printf("%d", ft_iterative_factorial(10));
}