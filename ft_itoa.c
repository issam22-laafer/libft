/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:17:17 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:38:51 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length_int(long int c)
{
	int	i;

	i = 1;
	if (c < 0)
	{
		i = i + 1;
		c = -c;
	}
	while (c / 10)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

static void	fill(char *p, long int nb, int len)
{
	while (nb)
	{
		p[len - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	int			i;
	char		*p;
	long int	nb;

	nb = n;
	len = length_int(nb);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	if (nb == 0)
		p[i] = '0';
	if (nb < 0)
	{
		p[i] = '-';
		i++;
		nb = -nb;
	}
	p[len] = '\0';
	fill(p, nb, len);
	return (p);
}
// int main(void)
// {
//     int a = 0;
//     char *result = ft_itoa(a);
//     if (result)
//     {
//         printf("the number: %s\n", result);
//         free(result); // Don't forget to free the allocated memory
//     }
//     return 0;
// }
