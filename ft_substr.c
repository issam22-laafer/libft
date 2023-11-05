/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:51:23 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 21:50:36 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	ft_memmove(ptr, &s[start], len);
	return (ptr);
}

// int main()
// {
// 	char    *str;

//     str = ft_substr("Hello World", 5, 5);
//     printf("%s\n", str);
//     free(str);
// }
