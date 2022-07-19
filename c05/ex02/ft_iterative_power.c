int ft_iterative_power(int nb, int power)
{
    int n;

    n = nb;
    if (power < 0)
        return (0);
    if (power == 0)
        return (1);
    if (power == 1)
        return (nb);
    while (power > 1)
    {
        nb = nb * n;
        power--;
    }
    return (nb);
}
#include <stdio.h>
int main ()
{
    printf("%d", ft_iterative_power(-5, 5));
}