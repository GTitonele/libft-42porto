/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:57:32 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 17:40:52 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/* #include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main ()
{
	char s1[] = "42";
	char s2[] = "porto";
	printf("funcao original: %zu\n", strlcpy(s1, s2, 2));
	printf("minha funcao: %zu\n", ft_strlcpy(s1, s2, 2));
	return (0);
} */
