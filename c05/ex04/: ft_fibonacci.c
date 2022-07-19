int ft_fibonacci(int index)
{
    int j;

    j = j + (j - 1);
    index--;
    if (index > 1)
    {
        return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    }
}

#include <stdio.h>

int main ()
{
    printf("%d", ft_fibonacci(5));
}