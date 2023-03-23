/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:16:59 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:33:50 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It compares both str's until there's no occurrence, so it returns de difference
 * between both str's.*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*d;
	const unsigned char	*s;
	size_t				i;

	d = (const unsigned char *)s1;
	s = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
			return (d[i] - s[i]);
		i++;
	}
	return (0);
}
