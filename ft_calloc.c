/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:39:31 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 17:46:03 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num != 0 && ((size * num) / num) != size)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr)
	{
		ft_bzero(ptr, num * size);
		return (ptr);
	}
	return (NULL);
}
// int main()
// {
// 	size_t size = SIZE_MAX, count = SIZE_MAX;
// 	void *res = ft_calloc(size, count);
// 	void *r = calloc(size, count);
// 	if (res == r)
// 		 printf("Well Done!\n");
// 	else
// 		printf("OHO\n");
// }