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

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     i;
    int     j;
    int     c;
    char    *string;

    if (size == 0)
        return (NULL);

 // MALLOC
    i = 1;
    c = 0;
    while (strs[i]) // ou while (i < size) puisque size = nombre de chaines dans strs
    {
        j = 0;
        while (strs[i][j])
        {
            c++;
            j++;
        }
        j = 0;
        while (sep[j] && i != (size - 1))
        {
            c++;
            j++;
        }
        i++;
    }
    string = malloc(sizeof(char) * (c + 1)); // +1 pour le null byte \0

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
}

int	main(int argc, char **argv)  // EFFACER LE MAIN
{
	printf("success :\n");
	printf("%s\n",  ft_strjoin(argc, argv, "___"));
}