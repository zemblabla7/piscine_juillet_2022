// met les param de argv dans le tableau

void ft_set_argv()
{
    while (row[r] < i)// i dan le main et size dans le brouillon est la longueur des colonnes et lignes donc 4 dans l' exemple
    {
        row[r] = argv[r];
        r++;
    }
    while (col[c] < i)
    {
        col[c] = argv[c];
        c++;
    }
}