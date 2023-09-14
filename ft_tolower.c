/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:31:11 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:55:57 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = 'a';
// 	b = 'B';
// 	c = '-';
// 	printf("%c\n", ft_tolower(a));
// 	printf("%c\n", ft_tolower(b));
// 	printf("%c\n\n", ft_tolower(c));
// 	printf("%c\n", tolower(a));
// 	printf("%c\n", tolower(b));
// 	printf("%c\n", tolower(c));
// }