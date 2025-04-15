/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:34:23 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/15 15:51:36 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (little[i] == '\0')
		return ((char *) &big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == to_find[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *) &big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*DESCRIPTION
     The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len char‐
     acters are searched.  Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific
     API, it should only be used when portability is not a concern.

RETURN VALUES
     If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first char‐
     acter of the first occurrence of little is returned.
*/
