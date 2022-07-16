// met les param de argv dans le tableau

void ft_set_outline()
{
    while (row[r] < i)// i dan le main et size dans le brouillon est la longueur des colonnes et lignes donc 4 dans l' exemple
    {
        while (col[c] < i)
        {
            row[r] = argv[r];
            col[c] = argv[c];
            c++;
        }
        r++;   
    }
}