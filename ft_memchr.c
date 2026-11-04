/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:55:07 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 16:13:29 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char *s1 = "42porto", *result1;
	char *s2 = "42porto", *result2;

	result1 = memchr(s1, 'p', strlen(s1));
	result2 = ft_memchr(s2, 'p', ft_strlen(s2));
	
	if (result1 != NULL && result2 != NULL)
	{
		printf("teste original: %s\n", result1);
		printf("teste minha funcao: %s\n", result2);
	}
	else
		printf("nao encontrou!");
	return (0);
} */