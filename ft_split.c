/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:52:17 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 15:27:53 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_strings(char *s, char c)
{
	int		i;
	int		count;

	i = 1;
	count = 0;
	while (s[i + 1] != '\0')
	{
		if (s[i] == c)
			count++;
		i++;
	}
	count++;
	return (count);
}

char	*get_len(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c)
	{
		i++;
	}
	return (i);

}

char	**ft_split(char const *s, char c);
{
	int		i;
	int		j;
	int		len;
	int		string_number;
	char	**ptr_array;
	char	*str;

	string_number = count_delimiters(); //count number of char pointers for pointer array based on delimiters
	ptr_array = (char **) malloc((sizeof(char *) * string_number) + 1); //allocate mem for pointer array; + 1 for NULL at end

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			size = get_len(&s[i], c) + 1; //get size of string snippet: len + 1
			str = (char *) malloc(size); //allocate enough mem for string snippet based on size
			ptr_array[j] = ft_strlcpy(str, &s[i], size); //copy string snippet to new array and place copy in pointer array
			j++; //increment to next pointer slot in pointer array
		}
		i++; 
	}
	ptr_array[j] = NULL;
	return (ptr_array);
}

//int size is 4 bytes. THIS DOESN'T YET COPY THE LAST AND FIRST SUBSTR, BECAUSE SUBSTR IDENTIFIED BY DELIMITER: AFTER DELIMITER
