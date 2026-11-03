/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:09 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/03 15:19:44 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*#include <stdio.h>
#include <string.h>

int main ()
{
	char str1[] = "AAAAA";
	char str2[] = "AAAAA";
	int i = 0;
	
	while (i < 6)
	{
		printf("%d ", str1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 6)
	{
		printf("%d ", str2[i]);
		i++;
	}
	printf("\n");
	ft_bzero(str1 + 1, 3);
	bzero(str2 + 1, 3);
	printf("Minha funcao: ");
	i = 0;
	while (i < 6)
	{
		printf("%d ", str1[i]);
		i++;
	}
	printf("\n");
	printf("Funcao original: ");
	i = 0;
	while (i < 6)
	{
		printf("%d ", str2[i]);
		i++;
	}
	printf("\n");
	return (0);
} */