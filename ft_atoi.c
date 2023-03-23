/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:12:21 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/21 18:13:29 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*This pass a str of numbers in an integer. 
 * In case the str contains spaces/tabs, it ignores them and
 * look for a '+' or '-', only to work with '-'. When it finds
 * it, the sign is going to be negative.
 *
 * Then, always the str contains numbers, it changes them from char
 * to int by (- '0'), and add the next one by multiplying the n * 10.
 *
 *
 * Ex: str = "25"
 *
 * num = ('2' - '0') + (0 * 10);
 * num = 2 + 0;
 * num = 2;
 * num(2) = ('5' - '0') + (2 * 10);
 * num = 5 + 20;
 * num = 25;*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return (num * sign);
}
