/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lissam <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:04:03 by lissam            #+#    #+#             */
/*   Updated: 2023/11/14 08:36:25 by lissam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < num)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}
// int main()
// {
// 	int arr[10] = {10, 23, 89, 78};
// 	ft_memset(arr, 1, 1);
// 	printf("%d",arr[0]);

// }
// int main() {
//     int arr[] ={15,6,9,8,5,6} ;
//     ft_memset(arr, 'A', 3);
//     printf("Array after using ft_memset: %s\n", arr);
//     return (0);
// }
// int	main(void)
// {
// 	int intArray[5]; // Create an integer array of size 5

// 	// Initialize the integer array with some values
// 	intArray[0] = 10;
// 	intArray[1] = 20;
// 	intArray[2] = 30;
// 	intArray[3] = 40;
// 	intArray[4] = 50;

// 	// Print the original array
// 	printf("Original Array:\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", intArray[i]);
// 	}
// 	printf("\n");

// 	// Use ft_memset to set all elements of the array to a new value (e.g., 0)
// 	ft_memset(intArray, '1', sizeof(intArray));

// 	// Print the modified array
// 	printf("Modified Array:\n");
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", intArray[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }
