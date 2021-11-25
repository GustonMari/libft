/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 15:20:25 by gmary             #+#    #+#             */
/*   Updated: 2021/11/25 17:48:34 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_elem;
	
	f(lst->content)
	head = ft_lstnew(lst->content);
	if (!head)
	{
		ft_lstclear(lst, &del);
		return (0);
	}
	lst = lst->next;
	while (lst)
	{
		f(lst->content);
		new_elem = ft_lstnew(lst->content);
		if (!new_elem)
		{
			ft_lstclear(lst, &del);
			return (0);
		}
		ft_lstadd_back(head, new_elem);
		lst = lst->next;
	}
	return ;
}

int	main()
{
	t_list	*head;
	t_list	*new2;
	t_list	*new3;
	t_list	*new4;

	head = ft_lstnew("3");
	new2 = ft_lstnew("2");
	new3 = ft_lstnew("1");
	new4 = ft_lstnew("4");
	ft_lstadd_front(&head, new2);
	ft_lstadd_front(&head, new3);
	ft_lstadd_back(&head, new4);
	ft_lstmap(head, , &ft_del);
	while (head)
	{
		printf(" %s\n ", (char *)(head->content));
		head = head->next;
	}
	return (0);
}