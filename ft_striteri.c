/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:14:29 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:31:00 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void fupeer(unsigned int i, char *c)
// {
//     if(*c >= 97 && *c <= 122)
//             *c = *c - 32;
// }
// int main()
// {
//     char str[] = "issam laafar";
//     ft_striteri(str,fupeer);
//     printf("%s",str);
// }
