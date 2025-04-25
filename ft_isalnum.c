/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:29:56 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 15:00:10 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_isalnum(int c)
{
	return ((ft_isalpha(c)) || (ft_isdigit(c)));
}
/*
#include <stdio.h>
int	main(void)
{
	if (ft_isalnum('a'))
		printf("Is alnum\n");
	if (ft_isalnum(')'))
		printf("Isn't alnum\n");
	if (ft_isalnum('0'))
		printf("Is alnum\n");
	if (ft_isalnum('+'))
		printf("Isn't alnum\n");
	if (ft_isalnum('P'))
		printf("Is alnum\n");
	if (ft_isalnum(' '))
		printf("Isn't alnum\n");
}
*/
