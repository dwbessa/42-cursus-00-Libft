/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:05:39 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:28:01 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = 'A';
// 	b = 'l';
// 	c = '+';
// 	printf("%d\n", ft_isalpha(a));
// 	printf("%d\n", ft_isalpha(b));
// 	printf("%d\n\n", ft_isalpha(c));
// 	printf("%d\n", isalpha(a));
// 	printf("%d\n", isalpha(b));
// 	printf("%d\n", isalpha(c));
// }