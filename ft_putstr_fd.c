/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:00:19 by lissam            #+#    #+#             */
/*   Updated: 2023/11/10 21:00:38 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    if(!s)
        return ;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}
// int main()
// {
//     char str[] = "issam laafar";
//     int fd;
//     fd = open("issam.txt",O_CREAT | O_WRONLY | O_TRUNC, 0644);
//     ft_putstr_fd(str,fd);
//     close(fd);
// }