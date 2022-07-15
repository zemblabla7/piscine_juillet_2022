#include <unistd.h>

void	rush(int x, int y)
{
	int	range_x;
	int	range_y;
	
	range_x = 0;
	range_y = 0;

	if (y <= 0)
	// si aucune ligne
	{
		write(1, "", 1);
	}
	else if (y == 1)
	// si 1 ligne
	{
		if (x <= 0)
		// si aucune colonne
		{
			write(1, 0, 1);
		}
		else if (x == 1)
		// si une seule colonne
		{
			write(1, "A\n", 2);
		}
		else if (x == 2)
		// si deux colonnes
		{
			write(1, "A", 1);
			write(1, "C\n", 2);
		}
		else if (x > 2) 
		// si plus de deux colones
		{
			write(1, "A", 1);
			range_x = 1;
			while (range_x < (x-1))
			{
				write(1, "B", 1);
				range_x++;
			}
			write(1, "C\n", 2);
		}
	}

	else if (y > 1)
	// si plus d'une ligne
	{
		while (range_y == 0)
		// si premiere ligne
		{
			if (x <= 0)
			// si aucune colonne
			{
				write(1, "", 1);
			}
			else if (x == 1)
			// si une seule colonne
			{
				write(1, "A\n", 2);
			}
			else if (x == 2)
			// si deux colonnes
			{
				write(1, "A", 1);
				write(1, "C\n", 2);
			}
			else if (x > 2) 
			// si plus de deux colones
			{
				write(1, "A", 1);
				range_x = 1;
				while (range_x < (x-1))
				{
					write(1, "B", 1);
					range_x++;
				}
				write(1, "C\n", 2);
			}
			range_y = 1;
		}

		while (range_y >= 1 && range_y < (y-1))
		// si lignes du milieu
			while (range_y < (y-1))
			{
				write(1, "B", 1);
				range_x = 1;
				while (range_x < (x-1)) 
				{
					write (1, " ", 1);
					range_x++;
				}
				if (x > 3)
				{
					write(1, "B", 2);
				}
				write(1, "\n", 1);
				range_y++;	
			}
		while (range_y >= (y-1) && range_y < y)
		// si derniere ligne
		{
			if (x <= 0)
			// si aucune colonne
			{
				write(1, " ", 1);
			}
			else if (x == 1)
			// si une seule colonne
			{
				write(1, "C\n", 2);
			}
			else if (x == 2)
			// si deux colonnes
			{
				write(1, "C", 1);
				write(1, "A\n", 2);
			}
			if (x > 2)
			// si plus de 3 colonnes
			{
				write(1, "C", 1);
				range_x = 1;
				while (range_x<(x-1))
				{
					write(1, "B", 1);
					range_x++;
				}
				write(1, "A\n", 2);
			}
			range_y++;
		}
	}
}
