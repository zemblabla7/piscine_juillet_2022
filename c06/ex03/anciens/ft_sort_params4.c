
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *param)
{
	int i;

	i = 0;
	while (param[i])
	{
		write(1, &param[i], 1);
		i++;
	}
    write(1, "\n", 1);
}

char	ft_swap(char *a, char *b)
{	
	char	c;
	char	d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

void		ft_sort_params(int argc, char *argv1, char *argv2)
{
	int i;

	i = 1;
	while (i < argc)
	{
		while (argv1[i] || argv2[i])
		{
			if (argv1 > argv2)
			{
				ft_swap(argv1, argv2)
			}
		}
		i++;
	}
}

int main (int argc, char **argv) 
{
	int i;
	
	i = 0;
	if (argc == 2)
		ft_putstr(argv[1]);
	if (argc > 2)
	{
		while (argv[i + 1] < argc)
		{
			ft_sort_params(argc, argv[i], argv[i + 1]);
			i++;
		}
	}
	return 0;
}