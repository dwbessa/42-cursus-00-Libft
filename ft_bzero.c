/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:46:43 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 14:52:37 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*char_s;

	char_s = (char *)s;
	i = 0;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}

// int main() {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, world!";
//     size_t n = 5; // Number of bytes to zero out

//     printf("Before ft_bzero: %s\n", str1);
//     ft_bzero(str1, n);
//     printf("After ft_bzero:  %s\n", str1);
//     printf("\nBefore bzero:    %s\n", str2);
//     bzero(str2, n);
//     printf("After bzero:     %s\n", str2);

//     return 0;
// }