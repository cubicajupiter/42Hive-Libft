/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:21:44 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 10:07:31 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp_dest;
	char	*temp_src;

	if (!dest && !src)
		return (NULL);
	temp_dest = (char *) dest;
	temp_src = (char *) src;
	i = 0;
	if (temp_dest > temp_src)
		while (n-- > 0)
			temp_dest[n] = temp_src[n];
	else
	{
		while (i++ < n)
			temp_dest[i] = temp_src[i];
	}
	return (dest);
}
/*
#include <assert.h>
int	main(void)
{

}
*/
