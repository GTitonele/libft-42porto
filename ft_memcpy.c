/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:56:17 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 13:17:56 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char		*src_ptr;
	unsigned char			*dest_ptr;
	size_t					i;

	if (!dest && !src)
		return (dest);
	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char s1[] = "42porto";
	char s1_ft[] = "42porto";
	char s2[] = "42lisboa";
	
	memcpy(s1, s2, 4);
	printf("funcao original: %s\n", s1);
	ft_memcpy(s1_ft, s2, 4);
	printf("minha funcao: %s\n", s1_ft);
	return (0);
} */