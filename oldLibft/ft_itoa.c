/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:12:01 by abello-r          #+#    #+#             */
/*   Updated: 2023/10/21 00:00:20 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n == 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*transf(char *nb, int n, int num_len)
{
	while (n > 0)
	{
		nb[num_len--] = (n % 10) + '0';
		n /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		j;

	j = num_len(n);
	nb = malloc(sizeof(char) * j + 1);
	if (!nb)
		return (NULL);
	if (n == -2147483648)
	{
		nb[0] = '-';
		nb[1] = '2';
		n = 147483648;
	}
	if (n == 0)
		nb[0] = '0';
	if (n < 0)
	{
		nb[0] = '-';
		n *= -1;
	}
	nb[j--] = '\0';
	transf(nb, n, j);
	return (nb);
}
