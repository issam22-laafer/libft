/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:42:11 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:36:03 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd != -1)
		write(fd, &c, 1);
}
// int main()
// {
//     int fd;
//     fd = open("putchar.txt",O_WRONLY | O_CREAT );
//     ft_putchar_fd('g',fd);
//     close(fd);
// }
