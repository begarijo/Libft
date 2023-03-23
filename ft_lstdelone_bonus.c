/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: begarijo <begarijo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:59:27 by begarijo          #+#    #+#             */
/*   Updated: 2023/03/21 18:22:16 by begarijo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*It only deletes one data in the lst*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del (lst->content);
		free (lst);
	}
}
