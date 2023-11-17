/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:04:03 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:36:25 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < num)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
// int main()
// {
// 	int arr[10] = {0, 0};
// 	ft_memset(arr, 5, 2);
// 	ft_memset(arr, 57, 1);

// 	printf("%d",arr[0]);
// }
