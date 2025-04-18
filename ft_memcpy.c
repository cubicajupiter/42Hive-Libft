/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:19:46 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 09:52:41 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/*DESCRIPTION
       The  memcpy()  function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if
       the memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/
