/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbresil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:29:48 by bbresil           #+#    #+#             */
/*   Updated: 2022/07/10 17:29:54 by bbresil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar1(char c);
void	ft_putchar2(char c, char d);
void	ft_putchar3(char c, char d, char e);
void	ft_first_line(int x);
void	ft_middle_lines(int x);
void	ft_last_line(int x);
void	ft_first_line_and_last_line_one_column(int x, int y, int range_y);

void	rush(int x, int y)
{
	int	range_y;

	range_y = 0;
	if (y <= 0 || x <= 0)
		ft_putchar1(0);
	else if (y == 1)
		ft_first_line_and_last_line_one_column(x, y, range_y);
	else if (y > 1)
	{
		while (range_y == 0)
		{
			ft_first_line_and_last_line_one_column(x, y, range_y);
			range_y++;
		}
		while (range_y >= 1 && range_y < (y - 1))
		{
			ft_middle_lines(x);
			range_y++;
		}
		while (range_y == (y - 1))
		{
			ft_first_line_and_last_line_one_column(x, y, range_y);
			range_y++;
		}
	}
}

void	ft_first_line(int x)
{
	int	range_x;

	range_x = 0;
	ft_putchar1('A');
	range_x = 1;
	while (range_x < (x - 1))
	{
		ft_putchar1('B');
		range_x++;
	}
	ft_putchar2('A', '\n');
}

void	ft_middle_lines(int x)
{
	int	range_x;

	range_x = 0;
	ft_putchar1('B');
	range_x = 1;
	while (x > 2 && range_x < (x - 1))
	{
		while (range_x < (x - 1))
		{
			ft_putchar1(32);
			range_x++;
		}
	}
	while (x > 1 && range_x == (x - 1))
	{
		ft_putchar1('B');
		range_x++;
	}
	ft_putchar1('\n');
}

void	ft_last_line(int x)
{
	int	range_x;

	range_x = 0;
	ft_putchar1('C');
	range_x = 1;
	while (range_x < (x - 1))
	{
		ft_putchar1('B');
		range_x++;
	}
	ft_putchar2('C', '\n');
}

void	ft_first_line_and_last_line_one_column(int x, int y, int range_y)
{
	if (range_y == 0)
	{
		if (x <= 0)
			ft_putchar1(0);
		else if (x == 1)
			ft_putchar2('A', '\n');
		else if (x == 2)
			ft_putchar3('A', 'A', '\n');
		else if (x > 2)
			ft_first_line(x);
		range_y = 1;
	}
	else if (range_y == (y - 1))
	{
		if (x <= 0)
			ft_putchar1(0);
		else if (x == 1)
			ft_putchar2('C', '\n');
		else if (x == 2)
			ft_putchar3('C', 'C', '\n');
		else if (x > 2)
			ft_last_line(x);
	}
}
