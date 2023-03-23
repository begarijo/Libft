/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:43:28 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/21 18:19:38 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It calculates the lenght of the number, to know
 * how many memory it needs.*/

unsigned long	ft_len(long nbr)
{
	unsigned long	len;

	len = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

/*Only if the number is 0*/

char	*zero(char *str)
{
	str = (char *)malloc(sizeof (char) * 2);
	if (!str)
		return (0);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

/*Changes an integer to a char by adding '0', and adding it to
 * the module of the number and the base.
 *
 * It must be in reverse, because it divides the number.*/

char	*ft_itoa(int n)
{
	char			*str;
	long			i;
	unsigned long	len;

	i = n;
	len = ft_len(i);
	str = 0;
	if (i == 0)
		return (zero(str));
	str = (char *)malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	while (i > 0)
	{
		str[len] = (i % 10) + '0';
		i /= 10;
		len--;
	}
	return (str);
}
