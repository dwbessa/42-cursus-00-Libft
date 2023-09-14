/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:08:33 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 16:15:41 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*char_s1;
	const unsigned char	*char_s2;
	size_t				i;

	i = 0;
	char_s1 = (const unsigned char *)s1;
	char_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (char_s1[i] != char_s2[i])
			return ((int)(char_s1[i]) - (int)(char_s2[i]));
		i++;
	}
	return (0);
}

// int main() {
//     // Test data
//     char str1[] = "Hello, worl!";
//     char str2[] = "Hello, world!";
//     size_t n = 13; // Number of bytes to compare

//     // Using ft_memcmp
//     int result1 = ft_memcmp(str1, str2, n);

//     // Using memcmp
//     int result2 = memcmp(str1, str2, n);

//     // Display results
//     printf("Using ft_memcmp: %d\n", result1);
//     printf("Using memcmp:    %d\n", result2);

//     if (result1 == result2) {
//         printf("Results match:   %d\n", result1);
//     } else {
//         printf("Results differ:  %d vs %d\n", result1, result2);
//     }

//     return 0;
// }