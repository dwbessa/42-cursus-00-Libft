/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:05:07 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/07 13:28:00 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (8);
	else
		return (0);
}

// int	main()
// {
// 	int a;
// 	int b;
// 	int c;
// 	a = 'k';
// 	b = 'M';
// 	c = '+';
// 	printf("%d\n", ft_isalnum(a));
// 	printf("%d\n", ft_isalnum(b));
// 	printf("%d\n\n", ft_isalnum(c));
// 	printf("%d\n", isalnum(a));
// 	printf("%d\n", isalnum(b));
// 	printf("%d\n", isalnum(c));
// }