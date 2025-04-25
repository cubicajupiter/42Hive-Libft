/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:47:26 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 14:46:17 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
size_t    ft_strlen(const char *str)
{
    size_t    s;

    s = 0;
    while (str[s] != '\0')
    {
        s++;
    }
    return (s);
}
*/
size_t    ft_strlcat(char *dest, char *src, size_t size)
{
    size_t     i;
    size_t    dst_len;
    size_t    src_len;

    dst_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = 0;
    if (dst_len == size)
        return (dst_len + src_len);
    else if (size > dst_len + src_len)
    {
        dest += dst_len;
        while (src[i])
            *(dest)++ = src[i++];
    }
    else
    {
        dest += dst_len;
        while ((dst_len + i) < (size - 1))
        {
            *(dest)++ = src[i];
            i++;
        }
    }
    *dest = '\0';
    return (dst_len + src_len);
}
/*
#include <stdio.h>
int    main(void)
{
    int i = 0;
    char  *string = "Bitch ";
    char    *dest;
    dest = (char *) malloc(sizeof(char) * 16);
    while (i < 16)
    {
      if (i < 7)
        dest[i] = string[i];
      else
        dest[i] = '\0';
      i++;
    }
    char    *src = "let's go.";
    //size_t    dest_size = ft_strlen(dest) + 1;
    //size_t    src_size = ft_strlen(src) + 1;
    size_t    size = 16;
    ft_strlcat(dest, src, size);
    printf("%s", dest);
}
*/
