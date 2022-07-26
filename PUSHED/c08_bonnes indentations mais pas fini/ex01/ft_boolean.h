/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: casomarr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:40:33 by casomarr          #+#    #+#             */
/*   Updated: 2022/07/26 17:50:15 by casomarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H

# define FT_BOOLEAN_H

# include <unistd.h>
# define     EVEN(nbr)   nbr % 2 = 0
# define     TRUE        1
# define     FALSE       0
# define     EVEN_MSG    "I have an even number of arguments."
# define     ODD_MSG     "I have an odd number of arguments."
# define     SUCCESS     0

typedef int	t_bool;

#endif