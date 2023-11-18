/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:38:04 by lissam            #+#    #+#             */
/*   Updated: 2023/11/18 15:45:44 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	new_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			ft_lstclear(&head, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&head, new_node);
		lst = lst->next;
	}
	return (head);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// void *to_upper(void *str)
// {
//     int i;
//     unsigned char *s = str;

//     i = 0;
//     while (s[i])
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//         i++;
//     }
//     char *new_str = ft_strdup((const char*)s);
//     if (new_str == NULL)
//     {
// 		return NULL;
//     }

//     return new_str;
// }

// void del_data(void *data)
// {
//     free(data);
// }

// int main()
// {
//     t_list *head = malloc(sizeof(t_list));
//     head->content = ft_strdup("content1");
//     head->next = NULL;
//     t_list *new1 = ft_lstnew(ft_strdup("content0"));
//     t_list *new2 = ft_lstnew(ft_strdup("content2"));

//     ft_lstadd_front(&head, new1);
//     ft_lstadd_back(&head, new2);

//     t_list *tmp = head;
//     while (tmp)
//     {
//         printf("%s\n", tmp->content);
//         tmp = tmp->next;
//     }

//     printf("=================\n");

//     t_list *head2 = ft_lstmap(head, &to_upper, &del_data);

//     t_list *tmp2 = head2;
//     while (tmp2)
//     {
//         printf("%s\n", tmp2->content);
//         tmp2 = tmp2->next;
//     }
//     ft_lstclear(&head, &del_data);
//     ft_lstclear(&head2, &del_data);

//     return 0;
// }
