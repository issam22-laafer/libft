/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:13:39 by lissam            #+#    #+#             */
/*   Updated: 2023/11/02 11:18:04 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			i;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char name[] = "issam laafar";
// 	printf("%s\n",ft_memchr(name,'j',10));
// 	printf("%s",memchr(name,'j',10));
// }
