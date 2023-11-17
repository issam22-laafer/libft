/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:41:14 by lissam            #+#    #+#             */
/*   Updated: 2023/11/09 14:58:30 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	l1;
	size_t	l2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (l1 + l2 + 1));
	if (!p)
		return (NULL);
	ft_strcpy(p, s1);
	i = 0;
	while (s2[i])
	{
		p[l1++] = s2[i++];
	}
	p[l1] = '\0';
	return (p);
}
// int main()
// {
// 	char *s1 = "fdgfdg";
// 	char *s2 = NULL;
// 	printf("%s", ft_strjoin(s1,s2));
// }
