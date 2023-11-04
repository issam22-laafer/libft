/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:46:04 by lissam            #+#    #+#             */
/*   Updated: 2023/11/04 09:46:08 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*mf;
	unsigned char		*string;
	const unsigned char	*string2;

	string = (unsigned char *)dest;
	string2 = (unsigned char *)src;
	if (!string && !string2)
		return (NULL);
	mf = (unsigned char *)malloc(n);
	ft_memcpy(mf, string2, n);
	ft_memcpy(string, mf, n);
	return (dest);
}