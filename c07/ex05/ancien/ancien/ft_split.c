#include <stdio.h>
#include <stdlib.h>

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

char **ft_split(char *str, char *charset)
{
    if (str[0] == '\0')
        return (NULL);
    // si charset vide on return NULL aussi?
    
    int     i;
    int     j;
    char     **tab;
    int     w;
    int     l;
    int words;

    words = ft_count_words(str, charset);
    w = -1;
    i = 0;
    j = 0;
    l = 0;
    tab = (char**)malloc(sizeof(char*) * (words + 1)); // pour la premiere dimension du tableau
    while (str[i])
	{
		if (ft_is_separator(str[i], charset) == 1)
			i++;
		else
		{
            l = 0;
			j = 0;
			while (ft_is_separator(str[i + j], charset) == 0)
            {  
                tab[w][l] = str[i + j];
                j++;
                l++;
            }
            tab[w] = malloc(sizeof(char) * j); // pour la premiere dimension du tableau
            i = i + j;
            w++;
        }
    }
    return (tab);
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