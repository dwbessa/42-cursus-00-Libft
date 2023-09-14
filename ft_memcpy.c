/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:54:23 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 16:38:33 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*char_src;
	unsigned char		*char_dest;
	size_t				i;

	char_src = (const unsigned char *)src;
	char_dest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dest1[20];
//     char dest2[20];
//     size_t n = 13; // Number of bytes to copy

//     // Using ft_memcpy
//     ft_memcpy(dest1, src, n);

//     // Using memcpy
//     memcpy(dest2, src, n);

//     // Display results
//     printf("Using ft_memcpy: %s\n", dest1);
//     printf("Using memcpy:    %s\n", dest2);

//     return 0;
// }