/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:50:06 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/21 18:15:47 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It allocates enought memory in a str.
 *
 * Count: The amount of data.
 * Size: Data type(char/int...)
 *
 * Once it allocates the memory, it fills it with 0*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, tot_size);
	return (dst);
}
