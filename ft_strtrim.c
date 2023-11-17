/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:36:55 by lissam            #+#    #+#             */
/*   Updated: 2023/11/09 14:56:56 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_thep(char *p)
{
	p = (char *)malloc(1 * sizeof(char));
	if (!p)
		return (NULL);
	p[0] = '\0';
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;
	size_t	i;

	p = NULL;
	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (fill_thep(p));
	p = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!p)
		return (NULL);
	i = 0;
	ft_strlcpy(p, s1 + start, end - start + 1);
	return (p);
}
// int main()
// {
// 	printf("%s\n", ft_strtrim("1hhhhhhhhh", "1h"));
// }