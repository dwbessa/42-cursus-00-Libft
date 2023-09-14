/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:09:25 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:27:21 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
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
// 	c = 128;
// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n", ft_isascii(b));
// 	printf("%d\n\n", ft_isascii(c));
// 	printf("%d\n", isascii(a));
// 	printf("%d\n", isascii(b));
// 	printf("%d\n", isascii(c));
// }