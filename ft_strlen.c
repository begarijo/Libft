/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:47:58 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:51:48 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Calculates the amount of bytes in a str, and return them*/

size_t	ft_strlen(const char	*str)

{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
