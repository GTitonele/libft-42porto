/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:58:21 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:08:17 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("Letra original: %c\n", 'A');
	printf("minha funcao: %c, funcao original: 
			%c\n", ft_tolower ('A'), tolower('A'));
	return (0);
} */