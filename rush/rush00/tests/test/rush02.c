#include <unistd.h>

void	ft_first_line(int *px, int *py);
void	ft_middle_lines(int *px, int *py);
void	ft_last_line(int *px, int *py);

void	rush(int x, int y)
{
	int	range_x;
	int	range_y;
	int	*px;
	int	*py;
	
	range_x = 0;
	range_y = 0;
	*px = x;
	*py = y;

	if (y == 0)
	// si aucune ligne
	{
		write(1, "", 1);
	}

	else if (y == 1)
	// si 1 ligne
	{
		ft_first_line(px, py);
	}

	else if (y > 1)
	// si plus d'une ligne
	{
		if (range_y == 0)
		// si premiere ligne
		{
			ft_first_line(px, py);
			range_y = 1;
		}
		else if (range_y >= 1 && range_y < (y-1))
		// si lignes du milieu
		{
			ft_middle_lines(px, py);
			range_y = (y-1);
		}	
		else if (range_y == (y-1))
		// si derniere ligne
		{
			ft_last_line(px, py);
		}
	}

}
