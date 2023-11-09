/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:36:55 by lissam            #+#    #+#             */
/*   Updated: 2023/11/09 12:37:01 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int start;
	int end;
	int i;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	p = (char *)malloc(end - start + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (start < end)
	{
		p[i] = s1[start];
		start++;
		i++;
	}
	p[i] = 0;
	return (p);
}