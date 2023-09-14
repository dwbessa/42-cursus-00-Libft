/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:15:35 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/02 12:33:56 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (j != 0)
		return ((char *)&s[j]);
	return (NULL);
}

// int	main()
// {
// 	const char *t = "testetetetetetete";
// 	int c = 't';
// 	int a = 'e';
// 	printf("%s", strrchr(t, c));
// 	printf("\n");
// 	printf("%s", ft_strrchr(t, c));
// 	printf("\n");
// 	printf("%s", strrchr(t, a));
// 	printf("\n");
// 	printf("%s", ft_strrchr(t, a));
// }