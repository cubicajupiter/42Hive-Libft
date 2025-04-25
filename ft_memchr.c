/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:39:37 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/23 15:24:17 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;
	unsigned char	uc;

	str = (unsigned char *) s;
	uc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
			return ((void *) str + i);
		i++; 
	}
	return (NULL);
}

/*The memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.
The memchr() and memrchr() functions return a pointer to the matching byte or NULL if the character does not occur in the  given  memory
       area.


#include <assert.h>
#include <string.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_memchr("abcdef", 'd', 6) == memchr("abcdef", 'd', 6));
	printf("%p\n", ft_memchr("abcdef", 'd', 6));
	printf("%p\n", memchr("abcdef", 'd', 6));
	assert(ft_memchr("abcdef", 'd', 6) == memchr("abcdef", 'd', 6));
}
*/
