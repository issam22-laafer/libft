/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 09:34:53 by lissam            #+#    #+#             */
/*   Updated: 2023/11/11 09:35:09 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    unsigned int i;
    char *p;

    if(!s)
        return (NULL);
    len = ft_strlen(s);
    p = (char *)malloc(sizeof(char) * len + 1);
    if(!p)
        return (NULL);
    i = 0 ;
    while (s[i])
    {
        p[i] = f(i,s[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}

// char fupeer(unsigned int i, char c)
// {
//     if(c >= 97 && c <= 122)
//         c = c - 32;
//     return (c);
// }
// int main()
// {
//     char str[] = "issam laafar";
//     printf("%s", ft_strmapi(str,fupeer));
// }