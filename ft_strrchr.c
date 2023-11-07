/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:00:40 by lissam            #+#    #+#             */
/*   Updated: 2023/11/03 08:29:22 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	d;
	int	len;

	len = ft_strlen(s);
	d = len - 1;
	while (d >= 0)
	{
		if (s[d] == c)
			return ((char *)&s[d]);
		d--;
	}
	return (0);
}
// int main()
// {
// 	char    *str;

//     str = "hello world";
//     printf("%s\n", ft_strrchr(str, 'G'));
// 	printf("%s\n", strrchr(str, 'G'));
// }
