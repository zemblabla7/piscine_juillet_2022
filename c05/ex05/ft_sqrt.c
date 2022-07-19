int ft_sqrt(int nb)
{
	int n;

	n = 0;
	while ((n * n) < nb)
	{
		n++;
	}
	if ((n * n) == nb)
		return (n);
	else
		return(0);
}

#include <stdio.h>
int main ()
{
	printf("%d", ft_sqrt(-4));
}