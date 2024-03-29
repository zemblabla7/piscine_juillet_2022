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

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int     i;
    int     j;
    int     c;
    char    *string;

    if (size == 0)
        return (NULL);
    i = 0;
    string = malloc(sizeof(char) * ft_strlen(sep));
    while (i++ < size - 1) // car pas de separateur apres le dernier mot et size = argc
        string = string + ft_strlen(strs[i]);
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