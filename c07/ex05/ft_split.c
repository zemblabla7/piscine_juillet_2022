#include <stdio.h>
#include <stdlib.h>

char **ft_split(char *str, char *charset)
{
    if (str[0] == '\0')
        return (NULL);
    // si charset vide on return NULL aussi?
    
    int     i;
    int     j;
    char     *tab;
    int     c;

    tab[0] = &str[0]; // verifier ce qu'il se passe qd ma string commence par un separateur.
    c = 1;
    j = 0;
    //tab = malloc(sizeof(char) * )
    while (charset[j])
    {
        i = 0;
        while (str[i])
        {
            if (str[i] == charset[j])
                //tab = malloc(sizeof(char) * c++);
                tab[c++] = &str[i + 1];
            i++;
        }
        j++;
    }
    tab[c] = '\0';
    return (&tab);
}

int main ()
{
    printf("%s", ft_split("carolina thibault,natan elise", ", ")); // le fait que la fonction soit un double pointeur change quelque chose?
    // TESTER AUSSI : 
    //qd deux séparateurs à la suite
    //quand charset vide
    //quand aucun char correspondant à charset dans str
    //qd séparateur se trouve à la fin de str

    /*char **tab;
    tab = ft_split("popet,llopet croissant", ", ");
	printf("%s\n", tab);*/

    return 0;
    // nico : on ne peut pas faire %s et la fonction, il faut printf ligne par ligne le tableau.
}