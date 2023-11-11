/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 08:28:57 by lissam            #+#    #+#             */
/*   Updated: 2023/11/11 08:28:59 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648)
        ft_putstr_fd("-2147483648",fd);
    else if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else if (n < 0)
    {
        ft_putchar_fd('-', fd);
        ft_putnbr_fd(-n, fd);
    }
    else if(n >= 0 && n <= 9)
    {
        ft_putchar_fd(n + 48, fd);
    }
}
// int main()
// {
//     int fd;
//     fd = open("issam.txt",O_CREAT | O_WRONLY | O_TRUNC, 0644);
//     ft_putnbr_fd(0,fd);
//     close(fd);
// }