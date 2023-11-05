/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:16:30 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 15:24:49 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	len = size - 1;
	while (src[j] != '\0')
	{
		j++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < len)
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (j);
}
// int main()
// {
// 	char	buf[] = "hello world";
// 	char    buf2[] = "issam";

// 	ft_strlcpy(buf, buf2, 5);
// 	printf("%s\n", buf);
// }