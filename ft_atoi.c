/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:27:34 by dbessa            #+#    #+#             */
/*   Updated: 2023/08/31 17:32:54 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || (nptr[i] == ' '))
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] == '-' || nptr[i +1] == '+')
			return (0);
		else if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * sign);
}

// int	main()
// {
// 	char	nptr[] = "    -1234ab567";
// 	char	nptr1[] = "    1234ab567";
// 	char	nptr2[] = "    +1234ab567";
// 	printf("%d\n", ft_atoi(nptr));
// 	printf("%d\n", ft_atoi(nptr1));
// 	printf("%d\n\n", ft_atoi(nptr2));
// 	printf("%d\n", atoi(nptr));
// 	printf("%d\n", atoi(nptr1));
// 	printf("%d\n", atoi(nptr2));
// }
