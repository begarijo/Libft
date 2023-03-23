/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:15:54 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:58:33 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*With ft_strchr, looks for an occurrence is 's1' with 'set'.
 * In case it's found, it returns the result of 'cutting' this str until the
 * position they occur.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*char_set;

	char_set = (char *)set;
	if (!s1 || !char_set)
		return (0);
	while (*s1 && ft_strchr(char_set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(char_set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
