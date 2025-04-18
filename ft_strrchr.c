/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:55:04 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 10:07:32 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	**ptr;

	ptr = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			*ptr = &s;
		s++;
	}
	if (c == '\0')
		return (s)
	return (*ptr); //cos the pointer pointer is dereferenced, it only returns the character pointer char *s stored in the pointer pointer (?)
}

//The strrchr() function returns a pointer to the last occurrence of the character c in the string s.
//The strchr() and strrchr() functions return a pointer to the matched character or NULL if the character is not found.   The  terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.
