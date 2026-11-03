/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:56:38 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/03 17:47:06 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char str1[5] = {0};
	char str2[5] = {0};
	
	printf("%s\n%s\n", (char *)ft_memset(str1, 'a', 4), (char *)memset(str2, 'a', 4));
	return (0);
} */