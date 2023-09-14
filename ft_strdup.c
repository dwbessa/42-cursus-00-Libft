/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:43:19 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 12:00:57 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		index;
	char	*d;

	index = 0;
	d = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		d[index] = src[index];
		index++;
	}
	d[index] = '\0';
	return (d);
}

// int main()
// {
// 	char	src[] = "Sou cadete";
//
// 	printf("Original: %s\n", src);
// 	printf("Memória original: %p\n", src);
// 	printf("Cópia 42: %s\n", ft_strdup(src));
// 	printf("Memória 42: %p\n", ft_strdup(src));
// 	printf("Cópia Biblioteca: %s\n", strdup(src));
// 	printf("Memória Biblioteca: %p", strdup(src));
// }
