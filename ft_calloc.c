/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:16 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/04 11:43:24 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb != 0 && size > (size_t)-1 / nmemb)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* #include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n = 5, i = 0;
	int *v1 = NULL, *v2 = NULL;
	
	v1 = (int *) calloc(n, sizeof(int));
	v2 = (int *) ft_calloc(n, sizeof(int));

	printf("funcao original: \n");
	while (i < n)
	{
		printf("vetor[%d] = %d\n", i, v1[i]);
		i++;
	}
	i = 0;
	printf("minha funcao: \n");
	while (i < n)
	{
		printf("vetor[%d] = %d\n", i, v2[i]);
		i++;
	}
	free(v1);
	free(v2);
	return (0);
} */