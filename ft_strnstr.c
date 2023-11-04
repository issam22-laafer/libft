/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:09:02 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 10:22:27 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;
	char	*str;

	if (!(big || little))
		return (NULL);
	llen = ft_strlen(little);
	str = (char *)big;
	i = 0;
	if (llen == 0)
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] != '\0' && little[j] != '\0'
			&& str[i + j] == little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (NULL);
}
