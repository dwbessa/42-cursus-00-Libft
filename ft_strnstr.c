/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:59:26 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 11:28:23 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <bsd/string.h> 
// #include <stdio.h> 
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len))
		{
			if (big[i + j] == '\0' && little[j] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	const char *big = "a piscina da 42 é muito legal";
// 	const char *find = "42";
// 	const char *ptr;
// 	ptr = strnstr(big, find, 15);
// 	printf("%s", ptr);
// 	printf("\n");
// 	const char *ptr2;
// 	ptr2 = ft_strnstr(big, find, 14);
// 	printf("%s", ptr2);
// 	printf("\n");
// 	const char *ptr3;
// 	ptr3 = ft_strnstr(big, find, 15);
// 	printf("%s", ptr3);
// }