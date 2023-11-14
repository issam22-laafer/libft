/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:55:44 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 21:29:36 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_w(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
		else if (str[i] == c)
			i++;
	}
	return (count);
}

static char	**free_ptr(char **str, int n)
{
	while (n > 0)
	{
		free(str[--n]);
	}
	free(str);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		n;

	ptr = (char **)malloc((ft_count_w(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	n = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		j = 0;
		while (s[i] != c && s[i] != '\0' && j++ > -1)
			i++;
		ptr[n++] = ft_substr(s, i - j, j);
		if (ptr[n - 1] == NULL)
			return (free_ptr(ptr, n));
	}
	ptr[n] = NULL;
	return (ptr);
}
//  int main()
//  {
//      char str[] = "  issam laafar    1337       d ";
//      char **res = ft_split(str,' ');
//      int i = 0;
//      while (i < ft_count_w(str,' '))
//      {
//          printf("%s\n",res[i]);
//          i++;
//          }
// }
