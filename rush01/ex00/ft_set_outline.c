// met les param de argv dans le tableau

void ft_set_outline(int *tab, int argc, char **argv, int i)
{
    int     x;
    int     y;
    int     j;

    x = 0;
    y = 0;
    while (tab[x][0] < i + 1) // ou <= ? car l'outline est en dehors du carre jaune qui est egal a i.
    {
        while (tab[0][y] < i + 1)
        {
            tab[x][0] = argv[x];
            tab[0][y] = argv[y];
            tab[0][i] = argv[argc - y];
            tab[i][0] = argv[argc - x];
            x++;
        }
        y++;   
    }
    ft_set_nb(tab, x, y, i);
}