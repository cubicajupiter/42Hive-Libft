/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:53:44 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/24 14:51:07 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
//just outputs 1 char into fd, allocates 1 byte for 1 char...
#include <assert.h>
int	main(void)
{
	
}
*/
