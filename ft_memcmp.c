/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:56:10 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 16:36:56 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "42porto";
	char s2[] = "42parte";

	printf("funcao original: %d\n", memcmp(s1, s2, 3));
	printf("minha funcao: %d\n", ft_memcmp(s1, s2, 3));
	return (0);
} */