int	ft_is_prime(int nb)
{
    int i;

    i = 2;
    if (nb <= 1)
    	return (0);
    while ((i*i) <= nb)
    {
        if ((nb % i) == 0)
            return(0);
        i++;
    }
    return (1);
}


#include <stdio.h>

int main ()
{
    printf("%d", ft_is_prime(17));
    return 0;
}
