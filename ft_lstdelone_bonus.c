/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:49:49 by lissam            #+#    #+#             */
/*   Updated: 2023/11/15 15:39:36 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
// void del_int_data(void *data) {
//     free(data);
// }
// int main() {
//     t_list *node = (t_list *)malloc(sizeof(t_list));
//     node->content = strdup("issam");
//     node->next = NULL;
//     ft_lstdelone(node, del_int_data);
//     return 0;
// }
