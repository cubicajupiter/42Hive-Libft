/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalkama <jvalkama@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:53:03 by jvalkama          #+#    #+#             */
/*   Updated: 2025/04/17 16:24:58 by jvalkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	powers_of_ten(int n, int power)
{
	int		count;

	count = 1;
	if (n % power > 0)
		count += powers_of_ten(n, power * 10)
	return (count);
}

void	ascifier(char *dst, int n, int len)
{
	char	digit;
	int		i;

	i = 1
	while (n > 0)
	{
		digit = (n % 10) + '0';
		dst[len - i] = digit;
		n /= 10;
		i++;
	}
	dst[len] = '\0'; //no return value, modifies elements in place
}

char	*ft_itoa(int n)
{
	int		len;
	char	*string;

	len = 0;
	if (n == -2147483648)
	{
		string = "-2147483648";
		return (string);
	}
	else if (n == 0)
	{
		string = "0"
		return (string);
	}
	else if (n < 0)
	{
		len += 1;
		n *= -1;
	}
	len += powers_of_ten(n, 1);
	string = (char *) malloc(len + 1);
	ascifier(string, n, len); //modifies the string in place
	return (string);
}
