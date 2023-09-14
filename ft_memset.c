/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:28:09 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/04 14:27:33 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*char_s;

	char_s = (char *)s;
	i = 0;
	while (i < n)
	{
		char_s[i] = (char)c;
		i++;
	}
	return (s);
}

// int main() {
//     char str1[20];
//     // char str2[20];
//     ft_memset(str1, 'A', 5);
//     // memset(str2, 'A', 5);
//     printf("Using ft_memset: %s\n", str1);
//     // printf("Using memset:    %s\n", str2);
//     return 0;
// }