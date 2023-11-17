/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 13:12:01 by abello-r          #+#    #+#             */
/*   Updated: 2023/11/17 20:17:49 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long n)
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

static char	*transf(char *nb, long n, int num_len)
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
	long	new;

	j = num_len(n);
	new = n;
	nb = malloc(sizeof(char) * j + 1);
	if (!nb)
		return (NULL);
	if (new == 0)
		nb[0] = '0';
	if (new < 0)
	{
		nb[0] = '-';
		new *= -1;
	}
	nb[j--] = '\0';
	transf(nb, new, j);
	return (nb);
}
