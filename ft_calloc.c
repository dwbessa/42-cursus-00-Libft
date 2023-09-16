/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:19:02 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/15 22:16:06 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;
	int		c;

	c = 0;
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr != NULL)
		ft_memset(ptr, c, total_size);
	return (ptr);
}
