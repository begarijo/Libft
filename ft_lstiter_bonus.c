/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:22:02 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/21 18:22:49 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It applies a function in the whole lst by moving in it.*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*new;

	if (lst != NULL)
	{
		new = lst;
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}
