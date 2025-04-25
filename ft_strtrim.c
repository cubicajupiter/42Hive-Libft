/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:51:39 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 15:08:38 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trim_cpy;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	trim_cpy = malloc(len);
	if (!trim_cpy)
		return (NULL);
	while (s1[i] != '\0')
	{
		if (set)
			return 0;
		// where does the end end, where does the beginning end? the chars in the set are removed in their set order or in any order?
	}
	return 0;
}
/*
#include <assert.h>
int	main(void)
{

}
*/
