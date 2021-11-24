/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmary <gmary@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:44:15 by gmary             #+#    #+#             */
/*   Updated: 2021/11/24 18:37:38 by gmary            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst)
	{
		*alst = new;
		return ;
	}
	else
	{
		new->next = *alst;
		*alst = new;
	}
}

#include <stdio.h>

int	main(int ac, char **av)
{
	(void)ac;
	t_list	*new1;
	t_list	*new2;
	t_list	*new3;
	t_list	**begin;
	

	//new1 = ft_lstnew(av[2]);
	//new2 = ft_lstnew(av[3]);
	//new3 = ft_lstnew(av[4]);
	new1 = ft_lstnew("salut");
	new2 = ft_lstnew("toi");
	new3 = ft_lstnew("la");
	ft_lstadd_front(begin, new1);
	ft_lstadd_front(begin, new2);
	ft_lstadd_front(begin, new3);
	while ((*begin)->next)
	{
		printf("%s\n", (char *)((*begin)->content));
		//(*begin)->next;
	}
	return (0);
}