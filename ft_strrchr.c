/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:00:40 by lissam            #+#    #+#             */
/*   Updated: 2023/11/07 20:44:16 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char    *str;
//     str = "hello worldman";
//     printf("%s\n", ft_strrchr(str, 'm') + 1);
// 	printf("%s\n", strrchr(str, 'm') + 1);
// }
