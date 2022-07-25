/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 19:20:20 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/23 19:20:21 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int     ft_malloc(int size, char *sep)


char *ft_strjoin(int size, char **strs, char *sep)
{
    if (size == 0)
        return (NULL);

    int     i;
    int     j;
    int     c;
    char    *string;

// MALLOC
    i = 1;
    c = 0;
    while (strs[i])
    {
        j = 0;
        while (strs[i][j])
            c++; 
        j = 0;
        while (sep[j] && i != (size - 1))
            c++;
        i++;
    }
    string = malloc(sizeof(char) * c);

// fonction
    i = 1;
    c = 0;
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            string[c++] = strs[i][j++]; // on met dans string toutes les chaines de strs
        j = 0;
        while (sep[j] && i != (size - 1)) // car on met un séparateur que jusqu'à entre l'avant-dernier et le dernier string. 
            string[c++] = sep[j++];
        i++;
    }
    string[c] = '\0';
    return (string);
    free (string);
}

int	main(int argc, char **argv)  // EFFACER LE MAIN
{
	printf("success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));

    // nico : on ne peut pas faire %s et la fonction, il faut printf ligne par ligne le tableau.
}