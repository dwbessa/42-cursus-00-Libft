/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:22:51 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/15 22:17:28 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(int n)
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

char	*ft_itoa(int n)
{
	char	*nb;
	int		j;

	j = num_len(n);
	nb = malloc(sizeof(char) * j);
	if (!nb)
		return (NULL);
	if (n == -2147483648)
	{
		nb[0] = '-';
		nb[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		nb[0] = '-';
		n *= -1;
	}
	nb[j--] = '\0';
	while (n > 0)
	{
		nb[j--] = (n % 10) + '0';
		n /= 10;
	}
	return (nb);
}
