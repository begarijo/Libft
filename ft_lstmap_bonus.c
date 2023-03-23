/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:28:10 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/23 11:20:47 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It applies to every lst node the function 'f'.
 * Once it's applied, create a new lst with the results.*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*save;

	if (!lst)
		return (NULL);
	new = NULL;
	while (lst)
	{
		save = ft_lstnew((*f)(lst->content));
		if (!save)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, save);
		lst = lst->next;
	}
	return (new);
}
