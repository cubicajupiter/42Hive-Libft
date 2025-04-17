/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:48:41 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 13:11:34 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = malloc(len + 1);
	if (!substr)
	{
		return (NULL);
	}
	while (s[start])
	{
		*(substr)++ = s[start];
		start++;
	}
	return (substr); //points to first value?
}
