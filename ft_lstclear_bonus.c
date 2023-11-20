/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:55:20 by lissam            #+#    #+#             */
/*   Updated: 2023/11/15 21:55:23 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while ((*lst) != NULL)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		*lst = NULL;
	}
}
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// void del(void *data)
// {
// 	free(data);
// }
// int main()
// {
// 	// t_list *head = ft_lstnew(strdup("content1"));
// 	t_list *head = NULL;

// 	t_list *newback = ft_lstnew(strdup("comtent2"));

// 	t_list *newfront = ft_lstnew(strdup("comtent0"));

// 	ft_lstadd_back(&head,newback);

// 	ft_lstadd_front(&head,newfront);

// 	t_list *tmp;
// 	tmp = head;
// 	printf("Size of this linked list is : %d\n",ft_lstsize(head));
// 	while (tmp != NULL)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp->next;
// 	}

// 	ft_lstclear(&head,del);

// 	printf("%p",head);
// }