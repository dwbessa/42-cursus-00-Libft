/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbessa <dbessa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:56:40 by dbessa            #+#    #+#             */
/*   Updated: 2023/09/15 22:20:51 by dbessa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	newstr_len(char const *s1, char const *set)
{
	size_t	count;
	size_t	i;
	size_t	j;

	count = 0;
	j = 0;
	while (s1[j] != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[j] != set[i])
				i++;
			else
			{
				count++;
				break ;
			}
		}
		j++;
	}
	j = ft_strlen(s1) - count;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	j;
	size_t	k;
	size_t	z;

	z = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	newstr = malloc(sizeof(char) * newstr_len(s1, set));
	if (!newstr)
		return (NULL);
	while (s1[j])
	{
		k = 0;
		while (set[k] && s1[j] != set[k])
			k++;
		if (!set[k])
			newstr[z++] = s1[j];
		j++;
	}
	newstr[z] = '\0';
	return (newstr);
}
