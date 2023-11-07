/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:59:22 by lissam            #+#    #+#             */
/*   Updated: 2023/11/07 22:21:58 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if(s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char s1[] = "hello";
// 	char s2[] = "hellp";
// 	printf("%d\n",ft_strncmp(s1,s2,7));
// 	printf("%d",strncmp(s1,s2,7));
// }
