/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:09:02 by lissam            #+#    #+#             */
/*   Updated: 2023/11/07 12:39:36 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	llen;

	if (!(big || little))
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
// int main() {
//     const char *big = "Hello, this is a test string for searching.";
//     const char *little = "testd";

//     char *result = ft_strnstr(big, little, strlen(big));

//     if (result != NULL) {
//         printf("Substring found at index %ld: %s\n", result - big, result);
//     } else {
//         printf("Substring not found.\n");
//     }

//     return (0);
// }
