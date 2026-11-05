/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:57:27 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 17:38:33 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < dstsize && dst[j])
		j++;
	if (j == dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && j + i < dstsize - 1)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (j + ft_strlen(src));
}

/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main ()
{
	char s1[] = "42";
	char s2[] = "porto";
	printf("funcao original: %zu\n", strlcat(s1, s2, 2));
	printf("minha funcao: %zu\n", ft_strlcat(s1, s2, 2));
	return (0);
} */