/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:24:59 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/15 22:20:50 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final_str;
	size_t	i;

	i = 0;
	final_str = malloc(sizeof(char) * len);
	if (!final_str)
		return (NULL);
	while (i < len)
	{
		final_str[i] = s[start + i];
		i++;
	}
	final_str[i] = '\0';
	return (final_str);
}
