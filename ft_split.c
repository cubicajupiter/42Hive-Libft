/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:52:17 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 11:09:19 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t    get_len(const char *s, char c)
{
    int        i;

    i = 0;
    while (s[i] && s[i] != c)
    {
        i++;
    }
    return (i);
}

void    strlcpy(char *dst, const char *src, size_t size)
{
    while (*src && size > 1)
    {
        *(dst)++ = *(src)++;
        size--;
    }
    *dst = '\0';
}

static int        count_strings(const char *s, char c)
{
    int        count;
    while (*s == c)
        s++;
    count = 0;
    while (*(s + 1) != '\0')
    {
        if (*s == c)
        {
            while (*s == c)
            {
                s++;
                if (*(s + 1) == '\0')
                {
                    count++;
                    return (count);
                }
            }
            count++;
        }
        s++;
    }
    count++;
    return (count);
}

char    **ft_split(char const *s, char c)
{
    int        i;
    size_t    len;
    int        string_number;
    char    **ptr_array;
    char    *str;

    string_number = count_strings(s, c);
    printf("number of strings: %d\n", string_number);
    ptr_array = (char **) malloc(sizeof(char *) * (string_number + 1));

    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] && s[i] != c)
        {
            len = get_len(&s[i], c);
            str = (char *) malloc(sizeof(char) * len + 1);
            strlcpy(str, &s[i], len + 1);
            *(ptr_array)++ = str;
            i += len;
        }
        printf("snippet size: %zu\n", len+1);
    }
    *ptr_array = NULL;
    return (ptr_array - string_number);
}

/*
#include <string.h>
int    main(void)
{
	int	i = 0;
    char **split = ft_split("And that's it then.", ' ');
    printf("1st word: %s\n", split[0]);
    printf("2nd word: %s\n", split[1]);
    printf("3rd word: %s\n", split[2]);
    printf("4rd word: %s\n", split[3]);
	printf("5th word: %s\n", split[4]);
	while (split[i])
	{
		printf("%s ", split[i]);
		i++;
	}

    for (int i = 0; split[i]; i++) free(split[i]);
    free(split);
}
*/
