#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *a)
{
    int i;
    
    i = 0;
    while(a[i])
        i++;
    return (i);
}

char **ft_split(char *str, char *charset)
{
    if (str[0] == '\0')
        return (NULL);
    // si charset vide on return NULL aussi?
    
    int     i;
    int     j;
    char     **tab;
    int     c;
    int     l;

    // MALLOC
    j = 0;
    c = 1;
    while (charset[j])
    {
        i = 0;
        while (str[i])
        {
            if (str[i] == charset[j])
                c++;
            i++;
        }
        j++;
    }
    tab = malloc(sizeof(char) * c);

    //FONCTION
    tab[0] = str[0]; // verifier ce qu'il se passe qd ma string commence par un separateur.
    j = 0;
    c = 1;
    while (charset[j])
    {
        i = 0;
        while (str[i])
        {
            if (str[i] == charset[j])
            {
                l = 0;
                while (str[i + ft_strlen(charset)] != charset[j] || str[i + ft_strlen(charset)] != '\0') // ou tous les separateurs
                {
                    tab[c][l] = str[i + ft_strlen(charset)];
                    i++;
                    l++;
                }
            }
            i++;
            c++;
        }
        j++;
    }
    tab[c] = '\0';

    /*printf("%s", tab[0]);
    printf("%s", tab[1]);
    printf("%s", tab[2]);
    printf("%s", tab[3]);*/
    return (&tab);
}

int main ()
{
    ft_split("carolina thibault,natan elise", ", "); // le fait que la fonction soit un double pointeur change quelque chose?

    // TESTER AUSSI : 
    //qd deux séparateurs à la suite
    //quand charset vide
    //quand aucun char correspondant à charset dans str
    //qd séparateur se trouve à la fin de str

    /*char **tab;
    tab = ft_split("popet,llopet croissant", ", ");
	printf("%s\n", tab);*/

    return 0;
}