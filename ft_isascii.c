/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaccell <gbaccell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:59 by gbaccell          #+#    #+#             */
/*   Updated: 2026/11/03 15:50:08 by gbaccell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main ()
{
	printf("minha funcao: %d, funcao original:%d\n", ft_isascii ('4'), isascii('4'));
	printf("minha funcao: %d, funcao original:%d\n", ft_isascii (-1), isascii(-1));
	return (0);
} */