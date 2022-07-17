/* affiche seulement les valeurs du milieu (carre jaune) :
on va de row[2] et col[2] a row[i-1] et col[i-1] */

void    ft_print(int *tab[], int x, int y, int i)
{
    x = 1; // pour ne pas afficher l'outline
    y = 1;
    while (x < i)
    {
        while (y < i)
        {
            write(1, &tab[x][y], 1);
            x++;
        }
        y++;
    }
}