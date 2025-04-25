/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:12:05 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 15:12:56 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp_ptr;

	i = 0;
	temp_ptr = (char *) s;
	while (i < n)
	{
		temp_ptr[i] = '\0'; //will this actually access the memslot and replace it?	
		i++;
	}
}

//The  bzero()  function  erases  the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes
//       containing '\0') to that area.
//
//      The explicit_bzero() function performs the same task as bzero().  It differs from bzero() in that it guarantees that compiler optimiza‐
//       tions will not remove the erase operation if the compiler deduces that the operation is "unnecessary".

/*
#include <assert.h>

int	main(void)
{

}
*/
