/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:42:12 by lissam            #+#    #+#             */
/*   Updated: 2023/11/07 22:32:06 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	if (num == 0)
		return (0);
	s1 = (unsigned char *)ptr1;
	s2 = (unsigned char *)ptr2;
	i = 0;
	while (i < num - 1 && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     char s1[] = "isgam laafar";
//     char s2[] = "issam laafar";
//     printf("%d\n",ft_memcmp(s1,s2,18));
//     printf("%d\n",memcmp(s1,s2,18));
// }