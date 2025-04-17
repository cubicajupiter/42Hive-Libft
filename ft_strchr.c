/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:29:10 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/16 09:54:20 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

/* The strchr() function returns a pointer to the first occurrence of the character c in the string s.
Here "character" means "byte"; these functions do not work with wide or multibyte characters.
RETURN VALUE
The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found. The  terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
The  strchrnul()  function returns a pointer to the matched character, or a pointer to the null byte at the end of s (i.e., s+strlen(s)) if the character is not found.
*/
