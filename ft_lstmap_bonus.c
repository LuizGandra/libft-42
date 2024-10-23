/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcosta-g <lcosta-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:19:35 by lcosta-g          #+#    #+#             */
/*   Updated: 2024/10/23 19:13:44 by lcosta-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	new_list = NULL;
	while (temp)
	{
		node = ft_lstnew(f(temp->content));
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		temp = temp->next;
	}
	return (new_list);
}

/*
void	*lstmap_tester(void *content)
{
	char    *temp;

	temp = (char *)content;
	*temp = ft_toupper(*temp);
	return (temp);
}

void	lstmap_del_tester(void *content)
{
	ft_bzero((char *)content, ft_strlen((char *)content));
}

#include <stdio.h>
int	main(void)
{
	t_list	*list;
	t_list	*node;
	t_list	*new_list;
	char    str_1[] = "a";
	char    str_2[] = "b";

	list = ft_lstnew(str_1);
	node = ft_lstnew(str_2);
	ft_lstadd_back(&list, node);
	new_list = ft_lstmap(list, lstmap_tester, lstmap_del_tester);
	printf("Content: %s\n", (char *)new_list->content);
	printf("Node: %p\n", new_list->next);
	printf("Content: %s\n", (char *)new_list->next->content);
	printf("Node: %p\n", new_list->next->next);
	return (0);
}
*/
