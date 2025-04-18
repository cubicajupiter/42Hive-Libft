/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:23:44 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 09:56:16 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	while (src[i`] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

/*
The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
The strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.
take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0
Note that a byte for the NUL should be included in size.
src must be NUL-terminated
*/
