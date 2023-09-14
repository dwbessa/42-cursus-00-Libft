/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:14:53 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:28:05 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c < 32) || (c >= 127))
		return (0);
	else
		return (16384);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = 256;
// 	b = '\n';
// 	c = '+';
// 	printf("%d\n", ft_isprint(a));
// 	printf("%d\n", ft_isprint(b));
// 	printf("%d\n\n", ft_isprint(c));
// 	printf("%d\n", isprint(a));
// 	printf("%d\n", isprint(b));
// 	printf("%d\n", isprint(c));
// }