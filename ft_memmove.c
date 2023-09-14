/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 16:37:24 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 18:17:59 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;

	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	if (char_dest < char_src || char_dest >= char_src + n)
	{
		while (n--)
			*char_dest++ = *char_src++;
	}
	else
	{
		char_dest += n;
		char_src += n;
		while (n--)
			*(--char_dest) = *(--char_src);
	}
	return (dest);
}

// int main() 
// {
//     char src[] = "Hello, World!";
//     char dest1[20];
//     char dest2[20];
//     size_t n = 13; // Number of bytes to move

//     // Using ft_memmove
//     ft_memmove(dest1, src, n);

//     // Using memmove
//     memmove(dest2, src, n);

//     // Display results
//     printf("Using ft_memmove: %s\n", dest1);
//     printf("Using memmove:    %s\n", dest2);

//     return 0;
// }