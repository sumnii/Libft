/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:58:48 by sumsong           #+#    #+#             */
/*   Updated: 2022/01/20 01:02:17 by sumsong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = 0;
	while (lst)
	{
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == 0)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		new_node = ft_lstnew(f(lst->content));
		ft_lstadd_back(&new_lst, new_node);
		new_node = 0;
		lst = lst->next;
	}
	return (new_lst);
}
