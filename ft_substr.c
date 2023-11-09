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
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	if (!s)
		return (NULL);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		ptr[j] = '\0';
		return (ptr);
	}
	while (s[i] != '\0' && len > 0)
	{
		ptr[j] = s[i];
		i++;
		j++;
		len--;
	}
	ptr[j] = '\0';
	return (ptr);
}

// int main()
// {
// 	char    *str;

//     str = ft_substr("Hello World", 5, 5);
//     printf("%s\n", str);
//     free(str);
// }
