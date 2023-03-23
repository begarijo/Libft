/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:11:08 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:50:06 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It allocates memmory in a new str to copy both str's in order.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	i = 0;
	len = (int) ft_strlen(s1) + (int) ft_strlen(s2) + 1;
	str = ft_calloc(len, sizeof (char));
	if (!str)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		str[i] = (char)s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] != '\0')
	{
		str[i + j] = (char) s2[j];
		j++;
	}
	return (str);
}
