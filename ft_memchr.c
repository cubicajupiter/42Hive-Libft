/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:39:37 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 09:52:29 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++; 
	}
	return (NULL);
}

/*The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the  given  memory
       area.

*/
