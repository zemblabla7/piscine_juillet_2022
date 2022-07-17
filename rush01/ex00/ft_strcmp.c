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

/* string compare : 
- met tous les chiffres d'une ligne en ordre 1234
- verifie si dans cet ordre ca correspond aux conditions (aux chiffres des cotes) (return true, return false)
- verifie si ca correspond a la condition comme quoi on ne peut avoir deux chiffres (return true, return false)
pareils dans la meme colonne
- si oui on passe a la ligne suivante
- si non, on permute (comme dans l'exo ft_swap)
- si apres toutes les permutations possibles on n'arrive tjrs pas a trouver la facon 
de correspondre aux deux conditions, on fait du backtracking : on remonte a la ligne 
du dessus et on la permute.
*/

void    ft_set_nb(int *tab, int x, int y, int i)
{
    x = 1; // car on exclue les colonnes de l'outline
    y = 1;
    while (x < size) // on remplit le tableau des numeros en ordre croissant
    {
        tab[x][0] = x;
        x++;
    }
    ft_strcmp(tab, x, y, i);
}

void    ft_strcmp(int *tab, int x, int y, int i)
{
    x = 0;
    y = 0;
    while (tab[x][0] && tab[0][y])
    {
        ft_duplicate_condition(tab, x, y);
        if (false)
        {
            while (false)
            {
                ft_swap(tab, x, y, i);
                ft_duplicate_condition(tab, x, y);
            }
            if (false)
            {
                ft_swap(tab, x - 1, y - 1, i); // backtracking. Poineurs?
                ft_strcmp(tab, x, y);
            }
            if (true)
            {
                ft_outline_condition(tab, x, y);
                if (false)
                {
                    while (false)
                    {
                        ft_swap(tab, x, y, i);
                        ft_outline_condition(tab, x, y);
                    }
                    if (false)
                    {
                        ft_swap(tab, x - 1, y - 1, i); // backtracking. Pointeurs?
                        ft_strcmp(tab, x, y);
                    }
                    if (true)
                        ft_set_nb(tab, x + 1, y + 1);
                }
            }
        }
    }
    ft_print(tab, x, y, i);
}

void   ft_duplicate_condition(int *tab, int x, int y)
 {
    // on cherche si on trouve le meme num sur la file
        if (tab[x][0] == x)
            return (false);
        if else (tab[0][y] == y)
            return (false);
        else
            return (true);
 }

void    ft_outline_condition(int *tab, int x, int y)
{
    // on cherche si ca correspond aux conditions de point de vue
    x = 0;
    y = 0;
    /*while (tab[x][0] && tab[0][y]) // ou x <= i && y <= i 
    {
        if (tab[x+1]  tab[x][0]) // ???

    }*/
}

void    ft_swap(int *tab, int x, int y, int i)
{
/*
        - si le chiffre en tab[x][x] = size (= si c'est le plus grand numero possible) alors on doit assigner 
        a col[1] (faire un i = 0 puis i + 1) la plus petite valeur possible, c'est a dire 1.

        - a l'inverse, si le chiffre en tab[x][x]= 1 ou lui associe size (la plus grande valeur).

        - ensuite, la valeur de x dans tab[0][x] et tab[x][0] va determiner quels chiffres mettre direct a la suite :
        Par exemple, si x = 3 alors on prend les 3 plus grands chiffres (size, size-1 et size -2) et on les met en ordre 
        croissant a la suite a cote de cette case 3 de l'outline. Mais je ne suis pas sure que du coup la condition de la 
        case de l'autre cote de l'outline marche. 
                - Si elle ne marche pas, pour ne pas juste swaper au hasard, on determine quels valeurs essayer de 
                swaper en premier. Par exemple la valeur la plus haute peut cacher toutes les autres derriere elle, et a 
                l'inverse la valeur la plus faible fait apparaitre toutes les autres derriere elle. Donc on pourrait
                avoir une condition du genre :
                        - si dans la case d'un des deux outline il manque une valeur (genre on a un trois et on n'en voit 
                        que deux) alors on swap la premiere valeur qu'on met tout devant. NON
                        - si dans la case d'un des deux outline il manque une valeur, si on est sur la case a droite on ne 
                        considere d'abord que les chiffres a droite de la derniere valeur, la erniere valeur comprise (on 
                        ne considere que les valeurs a partir de la plus grande comprise quoi). Si une des valeurs a droite  
                        est cachee (c'est a dire si elle se trouve entre deux valeurs plus grandes qu'elle) alors on la swap 
                        de facon a la mettre plus en avant. Ex: sur un tableau 5*5 : 3  12534  3 --> on swap le 3 qui se 
                        trouve cache entre le 5 et le 4 de facon a le mettre le plus a droite possible. Si plusieurs valeurs
                        cachees on favorise la plus petite.
                        - a l'inverse, si on ne manque pas d'une valeur et qu'au contraire on voit une valeur en trop depuis 
                        notre point de vu de droite, on prend une des valeurs les plus hautes mais pas la plus grande pour ne pas 
                        toucher a la partie de gauche et on la fait swaper de facon a ce qu'elle cache une plus petite valeur 
                        qui lui serait adjacente. 
        */
    }
}
