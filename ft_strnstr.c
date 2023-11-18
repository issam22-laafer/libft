/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:09:02 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:25:59 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	if (!big && little && len == 0)
		return (NULL);
	llen = ft_strlen(little);
	i = 0;
	if (llen == 0)
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0'
			&& big[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main() {

// 	printf("ft_strnstr: %s \n", strnstr("issam","hh",1));

//     return (0);
// }
