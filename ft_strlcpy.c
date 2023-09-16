/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:49:44 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/15 22:19:47 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srcsize;
	size_t	j;

	srcsize = ft_strlen(src);
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dst[j] = src[j];
		j++;
	}
	while (j < size)
	{
		dst[j] = '\0';
		j++;
	}
	return (srcsize);
}
