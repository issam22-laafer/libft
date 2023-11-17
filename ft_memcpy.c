/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:54:38 by lissam            #+#    #+#             */
/*   Updated: 2023/11/04 09:54:40 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main()
// {
//     char s1[] = "abcdefghijklmno";
//     char s2[] = "abcdefghijklmno";
//     printf("%s\n",(char *)ft_memcpy(s1,s1+5,5));
//     printf("%s\n",(char *)memcpy(s2 ,s2+5,5));
// }
