/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:29:16 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 09:47:51 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.
RETURN VALUE:
The memcmp() function returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to
       be less than, to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference between the first pair of  bytes  (interpreted  as  un‐
       signed char) that differ in s1 and s2.
If n is zero, the return value is zero.
*/
