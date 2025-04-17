/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:21:44 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 09:52:56 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	temp[n];
	int		i;

	i = 0;
	while (i < n)
	{
		temp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dest[i] = temp[i];
		i++;
	}
	return (dest);
}

/* DESCRIPTION
       The  memmove()  function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as
       though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then  copied  from
       the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/
