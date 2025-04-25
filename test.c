/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 10:46:19 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 14:14:58 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <ctype.h>
#include <bsd/string.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

static char	test_strmapi(unsigned int i, char c)
{
	if (i % 2 == 0)
		c = toupper(c);
	else
		c = tolower(c);
	return (c);

}

static void	test_striteri(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = toupper(*c);
	else
		*c = tolower(*c);
}

void	test_ctypes()
{
    assert(ft_isalnum('a') == isalnum('a'));
    assert(ft_isalpha('Z') == isalpha('Z'));
    assert(ft_isascii(127) == isascii(127));
    assert(ft_isdigit('3') == isdigit('3'));
    assert(ft_isprint(' ') == isprint(' '));
    assert(ft_tolower('A') == tolower('A'));
    assert(ft_toupper('b') == toupper('b'));
}

void	test_atoitoa()
{
    assert(ft_atoi("42") == atoi("42"));
    assert(ft_atoi("-2147483648") == atoi("-2147483648"));

    assert(strcmp(ft_itoa(123), "123") == 0);
    assert(strcmp(ft_itoa(-42), "-42") == 0);
}

void	test_mem_functions()
{
    char buf1[10]; char buf2[10];
    assert(memcmp(ft_memset(buf1, 'A', 5), memset(buf2, 'A', 5), 5) == 0);

    char zero1[5]; char zero2[5];
    ft_bzero(zero1, 5); bzero(zero2, 5);
    assert(memcmp(zero1, zero2, 5) == 0);

    char msrc[] = "hello";
    char mcpy1[6]; char mcpy2[6];
    assert(memcmp(ft_memcpy(mcpy1, msrc, 6), memcpy(mcpy2, msrc, 6), 6) == 0);

    char mmove1[] = "12345"; char mmove2[] = "12345";
    ft_memmove(mmove1 + 2, mmove1, 3);
    memmove(mmove2 + 2, mmove2, 3);
    assert(memcmp(mmove1, mmove2, 5) == 0);

    assert(ft_memcmp("abc", "abc", 3) == memcmp("abc", "abc", 3));
    assert(ft_memchr("abcdef", 'd', 6) == memchr("abcdef", 'd', 6));

	char *cal1 = ft_calloc(5, sizeof(char));
	char *cal2 = calloc(5, sizeof(char));
	assert(memcmp(cal1, cal2, 5) == 0);
	free(cal1);
	free(cal2);
}

void	test_string_functions()
{
    assert(strcmp(ft_strdup("test"), strdup("test")) == 0);
    assert(ft_strlen("abc") == strlen("abc"));

    char jdst[20] = "Hello ";
    //char jsrc[] = "World";
    char jdst2[20] = "Hello ";
    //assert(ft_strlcat(jdst, jsrc, 20) == strlcat(jdst2, jsrc, 20));
    assert(strcmp(jdst, jdst2) == 0);

    char cpy1[20], cpy2[20];
    assert(ft_strlcpy(cpy1, "copy", 20) == strlcpy(cpy2, "copy", 20));
    assert(strcmp(cpy1, cpy2) == 0);

    assert(ft_strncmp("abc", "abd", 2) == strncmp("abc", "abd", 2));
    assert(ft_strchr("abcdef", 'd') == strchr("abcdef", 'd'));
    assert(ft_strrchr("abcdecf", 'c') == strrchr("abcdecf", 'c'));
    //assert(ft_strnstr("hello world", "world", 11) == strnstr("hello world", "world", 11));

    char *trimmed = ft_strtrim("   hello world   ", " ");
    assert(strcmp(trimmed, "hello world") == 0);
    free(trimmed);

    char **split = ft_split("a,b,c", ',');
    assert(strcmp(split[0], "a") == 0);
    assert(strcmp(split[1], "b") == 0);
    assert(strcmp(split[2], "c") == 0);
    assert(split[3] == NULL);
    for (int i = 0; split[i]; i++) free(split[i]);
    free(split);

    char *joined = ft_strjoin("Hello", "World");
    assert(strcmp(joined, "HelloWorld") == 0);
    free(joined);

    char *sub = ft_substr("libft", 1, 3);
    assert(strcmp(sub, "ibf") == 0);
    free(sub);

    char map_test[] = "abcde";
    char *mapped = ft_strmapi(map_test, test_strmapi);
    assert(strcmp(mapped, "aBcDe") == 0);
    free(mapped);

    char iter_test[] = "abcde";
    ft_striteri(iter_test, test_striteri);
    assert(strcmp(iter_test, "aBcDe") == 0);
}

void	test_output_functions()
{
    ft_putchar_fd('A', 1); // Should print A
    ft_putstr_fd("Hello\n", 1);
    ft_putendl_fd("World", 1);
    ft_putnbr_fd(1234, 1);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		if (argv[1][0] == 's')
			test_string_functions();
		else if (argv[1][0] == 'm')
			test_mem_functions();
		else if (argv[1][0] == 'c')
			test_ctypes();
		else if (argv[1][0] == 'a')
			test_atoitoa();
		else if (argv[1][0] == 'o')
			test_output_functions();
		else
			return (0);

	}
	return (0);
}
