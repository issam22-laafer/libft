/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:04:44 by lissam            #+#    #+#             */
/*   Updated: 2023/11/13 17:04:46 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *ptr = NULL;
    ptr = (t_list *)malloc(sizeof(t_list));
    if(!ptr)
        return (NULL);
    ptr->content = content;
    ptr->next = NULL;
    return (ptr);
}
// int main()
// {
//     t_list *ptr = ft_lstnew("issam");
//     printf("%s",ptr->content);
// }
