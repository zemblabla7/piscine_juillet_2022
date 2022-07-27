
int     ft_is_separator(char c, char *charset)
{
    int     i;

    i = 0;
    while (charset[i])
    {
        if (charset[i] == c)
            return (1);
        i++;
    }
    return(0);
}

int		ft_count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (ft_is_separator(str[i + 1], charset) == 1 && ft_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

int    ft_fill_tab(char **tab, char *str, char *charset, int idx_l)
{
	int		w;
	int		i;
	int		j;

	i = 0;
	w = -1;	
	while (str[i])
	{
		if (ft_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			tab[w] = malloc(sizeof(char) * j); // pour la deuxieme dimension du tableau // mais du coup on alloue pas la mémoire avant la première fois qu'on l'utilie dans la boucle. 
			j = 0;
			while (ft_is_separator(str[i + j], charset) == 0 || str[i + j] == '\0')
            {  
                tab[w] = str[i + j];
                j++;
            }
            printf("%d", j); // effacer
            i = i + j;
            w++;
        }
    }
	return (tab);
}

void        ft_split (char *str, char *charset)
{
	char	**tab;
	tab = malloc(sizeof(char) * (ft_count_words + 1)); // +1 pour le null byte // malloc pour la premiere dimension du tableau
	// finir de remplir cette fonction et de voir quoi envoyer à ft_fill_tab (idx_l est le w je pense donc il faudrait peut etre rajouter un while (w < word_count))

    ft_fill_tab(tab, str, charset, ft_count_words(str, charset));
}

int main(int argc, char **argv) // NE PAS ENVOYER LE MAIN
{
    char **tableau;
    int i;

    tableau = ft_split(argv[1], argv[2]);
    i = 1;
    if (argc == 3)
    {
        while(i < argc)
            printf("%s\n", tableau[i]);
        i++;
    }
    return(0);
}