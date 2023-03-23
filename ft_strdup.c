/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:17:11 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:48:57 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It DUPLICATES a str in a new one. So first, allocates enought memmory
 * for it.*/

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = (int) ft_strlen(s1) + 1;
	new = malloc(sizeof (char) * size);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
