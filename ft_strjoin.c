/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guilherme <guilherme@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 11:13:42 by guilherme         #+#    #+#             */
/*   Updated: 2026/10/20 11:19:41 by guilherme        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;
	size_t	total;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	total = len1 + len2 + 1;
	join = malloc(total);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, total);
	ft_strlcat(join, s2, total);
	return (join);
}
