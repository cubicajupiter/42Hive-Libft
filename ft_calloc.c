/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:04:55 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 15:43:56 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*space;
	size_t	total;

	total = nmemb * size;
	if (total > INT_MAX || total < 0)
		space = NULL;
	else
	{
		space = (void *) malloc(total);
		if (!space)
			space = NULL;
	}
	return (space);
}

/*
The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
       The  memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be suc‐
       cessfully passed to free().  If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an  error.
       By  contrast,  an  integer  overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized
       block of memory would be allocated:

           malloc(nmemb * size);

#include <assert.h>

int	main(void)
{

}
*/
