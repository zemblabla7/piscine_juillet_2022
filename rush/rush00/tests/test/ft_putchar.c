#include <unistd.h>

void	ft_first_line(int *px, int *py)
{
	int	count_x;
	
	count_x = 0;
	
	if (*px == 0)
	// si aucune colonne
	{
		write(1, "", 1);
	}
	else if (*px == 1)
	// si une seule colonne
	{
		write(1, "A\n", 2);
	}
	else if (*px == 2)
	// si deux colonnes
	{
		write(1, "A", 1);
		write(1, "A\n", 2);
	}
	else if (*px > 2) 
	// si plus de deux colones
	{
		write(1, "A", 1);
		count_x = 1;
		while (count_x < *px-1)
		{
			write(1, "B", 1);
			count_x++;
		}
		write(1, "A\n", 2);
	}
}

void	ft_middle_lines(int *px, int *py)
{
	int	count_y;
	
	count_y = 0;
	
	while (count_y<(*py-1)) 
	// tant que lignes du milieu
	{
		write (1, "B", 1);
		count_y++;	
	}
	
}

void	ft_last_line(int *px, int *py)
{
	int	count_x;
	
	count_x = 0;
	
	if (*px == 0)
	// si aucune colonne
	{
		write(1, "", 1);
	}
	else if (*px == 1)
	// si une seule colonne
	{
		write(1, "C\n", 2);
	}
	else if (*px == 2)
	// si deux colonnes
	{
		write(1, "C", 1);
		write(1, "C\n", 2);
	}
	if (*px > 2)
	// si plus de 3 colonnes
	{
		write(1, "C", 1);
			while (count_x<(*px-2))
			{
				write(1, "B", 1);
				count_x++;
			}
		write(1, "C\n", 2);
	}
}
