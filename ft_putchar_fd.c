/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:41:15 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:38:54 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Instead of use the standard output, it use a fd*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
