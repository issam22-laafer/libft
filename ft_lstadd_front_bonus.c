/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 08:33:14 by lissam            #+#    #+#             */
/*   Updated: 2023/11/15 10:29:07 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node = malloc(sizeof(t_list));
// 	node -> content = "issam";
// 	node -> next = NULL;

// 	t_list *new = malloc(sizeof(t_list));
// 	new -> content = "laafar";
// 	new -> next = NULL;
// 	ft_lstadd_front(&node,new);
// 	t_list *tmp;
// 	tmp = node;
// 	while(tmp != NULL)
// 	{
// 		printf("%s\n", tmp->content);
// 		tmp = tmp -> next; 
// 	}
// }