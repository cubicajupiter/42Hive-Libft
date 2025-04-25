/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:23:44 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 10:27:32 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	while (*src && size > 1)
	{
		*(dst)++ = *(src)++;
		size--;
	}
	if (size == 1)
		*dst = '\0';
	return (srclen);
}

/*
The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
The strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.
take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0
Note that a byte for the NUL should be included in size.
src must be NUL-terminated

#include <assert.h>
#include <string.h>
int	main(void)
{
        char dst[1];
        const char *src = "hello";
        size_t result = ft_strlcpy(dst, src, sizeof(dst));
        assert(result == 5); // Length of the source string
        assert(strcmp(dst, "") == 0); // Destination should be an empty string (null-terminated)
}
*/
