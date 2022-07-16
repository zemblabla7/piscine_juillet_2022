/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 11:24:50 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/16 11:24:54 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_strcmp(int argc, char *argv[j], int size)
{
	char    tab[size][size];
    int     row;
    int     col;
    int     c;
    int     r;
    int     nb[size];
    int     y;


    row = 0;
    col = 0;
    c = 0;
    r = 0;
    tab[size][size] = malloc(argc);
    // on met dans tableau nb tous les numeros possibles
    /*y = 1;
    while (y < size)
    {
            nb[y] = y;
            y++,
    } */

    bool isSafe(bool tab[size][size], int row, int col, int num)
    {
        int x;
        x = 0;
        // on cherche si on trouve le meme num sur la file
        while(x < size)
        {
            if (tab[row][x] == num)
                return false;
            if (tab[x][col] == num)
                return false;
        }
    }

    /*while (c < size && r < size)
    {
        int col
    }
    while (row < size)
    {
        while (col < size)
        {
            if ()
            col++;
        }
        row ++;
    }*/

    ft_print(nb, y, size);
}



void    ft_print(int *nb[], int y, int size)
{
    while (y < size)
    {
        write(1, &nb[y], 1);
        y++;
    }
}