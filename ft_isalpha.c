/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:24:19 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/25 10:26:40 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


//perform the check based on the current locale. checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) ||  islower(c)).   In  some  locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

/*
#include <assert.h>

int	main(void)
{

}
*/
