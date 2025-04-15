/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:57:17 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/15 15:10:58 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *str, int c, size_t  n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (*str);
}

//The memset() function returns a pointer to the memory area s. The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c.
