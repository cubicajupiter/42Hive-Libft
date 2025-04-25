/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:54:08 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 10:28:52 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
  write(fd, s, ft_strlen(s) + 1);
  write(fd, "\n", 1);
}
/*
#include <assert.h>
int	main(void)
{

}
*/
