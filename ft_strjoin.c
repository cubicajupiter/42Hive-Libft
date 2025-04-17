/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:51:23 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 13:18:09 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2);
{
	char	*newstr;

	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	while (*s1)
	{
		*(newstr)++ = *(s1)++;
	}
	while (*s2)	
	{
		*(newstr)++ = *(s2)++;
	}
	*newstr = '\0';
	return (newstr); //defaults to first value of array?
}
