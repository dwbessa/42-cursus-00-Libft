/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:19:02 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/04 14:40:51 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	int		c;

	c = 0;
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, c, total_size);
	return (ptr);
}

// int main() {
//     int *arr;
//     size_t num_elements = 5;

//     // Using ft_calloc
//     arr = (int *)ft_calloc(num_elements, sizeof(int));

//     if (arr == NULL) {
//         printf("Memory allocation with ft_calloc failed\n");
//         return 1;
//     }

//     // Printing the initialized content of the memory block
//     for (size_t i = 0; i < num_elements; i++) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     }

//     // Don't forget to free the allocated memory when done
//     free(arr);

//     return 0;
// }