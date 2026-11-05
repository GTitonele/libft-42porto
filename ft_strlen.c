/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:57:37 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:08:08 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* #include <stdio.h>
#include <string.h>

int main ()
{
	char str[] = "42Porto";

	printf("minha funcao: %zu, funcao original: 
			%zu\n", ft_strlen(str), strlen(str));
	return (0);
} */