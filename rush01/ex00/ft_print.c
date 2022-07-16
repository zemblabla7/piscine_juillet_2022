/* affiche seulement les valeurs du milieu (carre jaune) :
on va de row[2] et col[2] a row[i-1] et col[i-1] */

void    ft_print(int *nb[], int row, int col, int size)
{
    row = 2;
    col = 2;
    while (row < (size - 1) && col < (size - 1))
    {
        write(1, &nb[row][col], 1);
        col++;
        row++;
    }
}