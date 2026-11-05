/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:57:13 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 13:31:24 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*copy;

	i = 0;
	copy = malloc(ft_strlen(s) + 1);
	if (copy == NULL)
		return (NULL);
	while (s[i])
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
	char *str = "42porto";
	char *str1 = strdup(str);
	char *str2 = ft_strdup(str);

	printf("funcao original: %s\n", str1);
	printf("minha funcao: %s\n", str2);
	return (0);
} */