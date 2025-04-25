/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:12:41 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 10:12:55 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while ((i < n) && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned  char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}
/*
//works? Also, typecasting to unsigned char is necessary for comparing updated ascii values like the euro sign correctly. Checking for null terminators at the end of both will yield correct result?
#include <assert.h>
int	main(void)
{

}
*/
