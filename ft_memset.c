/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:04:03 by lissam            #+#    #+#             */
/*   Updated: 2023/11/01 13:38:07 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*str;
	size_t	i;

	str = ptr;
	i = 0;
	while (i < num)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
// int main() {
//     char arr[] = "issam laafar 1337";
    
//     ft_memset(arr, 'A', 3);
//     printf("Array after using ft_memset: %s\n", arr);

//     return 0;
// }
