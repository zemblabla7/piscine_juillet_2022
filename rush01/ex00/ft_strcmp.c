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
- verifie si dans cet ordre ca correspond aux conditions (aux chiffres des cotes)
- verifie si ca correspond a la condition comme quoi on ne peut avoir deux chiffres 
pareils dans la meme colonne
- si oui on passe a la ligne suivante
- si non, on permute (comme dans l'exo ft_swap)
- si apres toutes les permutations possibles on n'arrive tjrs pas a trouver la facon 
de correspondre aux deux conditions, on fait du backtracking : on remonte a la ligne 
du dessus et on la permute.
*/

