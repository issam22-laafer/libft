/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:52:55 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 14:51:27 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = ft_lstlast(*lst);
	temp->next = new;
}
// int main()
// {
// 	t_list *node = malloc(sizeof(t_list));
// 	node -> content = "issam";
// 	node -> next = NULL;

// 	t_list *tmp;
// 	tmp = node;
// 	while(tmp != NULL)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp -> next;
// 	}

// 	printf("=========\n");
// 	t_list *new = malloc(sizeof(t_list));
// 	new -> content = "laafar";
// 	new -> next = NULL;

// 	ft_lstadd_back(&node,new);

// 	tmp = node;
// 	while(tmp != NULL)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp -> next;
// 	}
// }