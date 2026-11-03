/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:54:10 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/03 15:57:53 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("minha funcao: %d, funcao original:%d\n", ft_isprint ('4'), isprint('4'));
	printf("minha funcao: %d, funcao original:%d\n", ft_isprint ('\0'), isprint('\0'));
	return (0);
} */