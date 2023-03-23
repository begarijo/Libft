/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:49:33 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:59:24 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It creates a new str by copying 's' in it starting in a determinated
 * position, and with a lenght stablished.*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (start > ft_strlen(s))
		return (ft_calloc(1, 1));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)ft_calloc(len + 1, sizeof (char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start] != '\0' && start < ft_strlen(s) && i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	return (str);
}
