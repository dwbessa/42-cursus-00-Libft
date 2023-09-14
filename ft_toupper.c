/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:25:04 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:43:36 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = 'a';
// 	b = 'B';
// 	c = '\n';
// 	printf("%c\n", ft_toupper(a));
// 	printf("%c\n", ft_toupper(b));
// 	printf("%c\n\n", ft_toupper(c));
// 	printf("%c\n", toupper(a));
// 	printf("%c\n", toupper(b));
// 	printf("%c\n", toupper(c));
// }