/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:30:41 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 12:33:09 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src) + size);
	j = ft_strlen(dst);
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
// 	printf(" -> %zu\n", ft_strlcat(NULL, "ff", 0));
// 	// printf(" -> %zu\n", strlcat(NULL, "ff", 0));
// 	// ft_strlcat(NULL, "str", 0);
// }