/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:58:26 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/05 19:08:22 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("Letra original: %c\n", 'a');
	printf("minha funcao: %c, funcao original: 
			%c\n", ft_toupper ('a'), toupper('a'));
	return (0);
} */