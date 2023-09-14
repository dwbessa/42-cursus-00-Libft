/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:41:27 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/08 23:27:48 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = '9';
// 	b = 'p';
// 	c = '+';
// 	printf("%d\n", ft_isdigit(a));
// 	printf("%d\n", ft_isdigit(b));
// 	printf("%d\n\n", ft_isdigit(c));
// 	printf("%d\n", isdigit(a));
// 	printf("%d\n", isdigit(b));
// 	printf("%d\n", isdigit(c));
// }